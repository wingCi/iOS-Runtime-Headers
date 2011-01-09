/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */



@interface GKMultiColumnTableViewController : GKTableViewController 
{
    NSUInteger _columnCount;
    float _columnSeparatorWidth;
}

@property float columnSeparatorWidth;
@property NSUInteger columnCount;


- (id)reuseIdentifierForRowAtIndexPath:(id)arg1;
- (id)contentsViewForIndexPath:(id)arg1 withExistingView:(id)arg2;
- (void)didSelectIndexPath:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (float)columnSeparatorWidth;
- (void)setColumnSeparatorWidth:(float)arg1;
- (NSUInteger)columnCount;
- (void)setColumnCount:(NSUInteger)arg1;
- (id)initWithStyle:(NSInteger)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;

@end