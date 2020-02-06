//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "FLEXFileBrowserSearchOperationDelegate-Protocol.h"
#import "UISearchControllerDelegate-Protocol.h"
#import "UISearchResultsUpdating-Protocol.h"

@class NSArray, NSNumber, NSOperationQueue, NSString, UIDocumentInteractionController, UISearchController;

@interface FLEXFileBrowserTableViewController : UITableViewController <UISearchResultsUpdating, UISearchControllerDelegate, FLEXFileBrowserSearchOperationDelegate>
{
    NSString *_path;
    NSArray *_childPaths;
    NSArray *_searchPaths;
    NSNumber *_recursiveSize;
    NSNumber *_searchPathsSize;
    NSOperationQueue *_operationQueue;
    UIDocumentInteractionController *_documentController;
    UISearchController *_searchController;
}

@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) UIDocumentInteractionController *documentController; // @synthesize documentController=_documentController;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSNumber *searchPathsSize; // @synthesize searchPathsSize=_searchPathsSize;
@property(retain, nonatomic) NSNumber *recursiveSize; // @synthesize recursiveSize=_recursiveSize;
@property(retain, nonatomic) NSArray *searchPaths; // @synthesize searchPaths=_searchPaths;
@property(copy, nonatomic) NSArray *childPaths; // @synthesize childPaths=_childPaths;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)openFileController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)fileBrowserSearchOperationResult:(id)arg1 size:(unsigned long long)arg2;
- (id)resultTableView;
- (id)initWithPath:(id)arg1;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

