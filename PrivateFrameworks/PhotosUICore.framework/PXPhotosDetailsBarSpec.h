/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDetailsBarSpec : PXBarSpec {
    unsigned int  _detailsOptions;
    NSSet * _includedBarItemIdentifiers;
    BOOL  _shouldPlaceEditActionsInToolbar;
    NSDictionary * _sortPriorityByBarItemIdentifierByPlacement;
}

@property (nonatomic) unsigned int detailsOptions;

- (void).cxx_destruct;
- (id)_placementForBarItem:(id)arg1;
- (BOOL)_shouldIncludeItem:(id)arg1;
- (id)_sortPriorityForBarItem:(id)arg1 placement:(id)arg2;
- (unsigned int)detailsOptions;
- (id)initWithExtendedTraitCollection:(id)arg1;
- (void)setDetailsOptions:(unsigned int)arg1;
- (id)sortedBarItemsByPlacement:(id)arg1;

@end
