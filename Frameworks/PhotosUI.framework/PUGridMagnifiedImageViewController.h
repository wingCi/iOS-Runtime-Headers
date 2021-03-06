/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUGridMagnifiedImageViewController : UIViewController {
    BOOL  _canShowFullScreen;
    id  _delegate;
    struct CGPoint { 
        float x; 
        float y; 
    }  _gestureWindLocation;
    struct CGSize { 
        float width; 
        float height; 
    }  _imageSize;
    NSIndexPath * _itemIndexPath;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _itemWindFrame;
    struct CGPoint { 
        float x; 
        float y; 
    }  _lastLocation;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _magnifiedDragEdgeInsets;
    struct CGSize { 
        float width; 
        float height; 
    }  _magnifiedSize;
    PUGridMagnifiedView * _magnifiedView;
    float  _magnifiedYOffset;
    struct CGSize { 
        float width; 
        float height; 
    }  _shadowOffset;
    float  _shadowOpacity;
    float  _shadowRadius;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _trackingWindFrame;
}

@property (nonatomic, readonly) BOOL canShowFullScreen;
@property (nonatomic) id delegate;
@property (nonatomic) struct CGPoint { float x1; float x2; } gestureWindLocation;
@property (nonatomic) struct CGSize { float x1; float x2; } imageSize;
@property (nonatomic, retain) NSIndexPath *itemIndexPath;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } itemWindFrame;
@property (nonatomic) struct CGPoint { float x1; float x2; } lastLocation;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } magnifiedDragEdgeInsets;
@property (nonatomic) struct CGSize { float x1; float x2; } magnifiedSize;
@property (nonatomic, retain) PUGridMagnifiedView *magnifiedView;
@property (nonatomic) float magnifiedYOffset;
@property (nonatomic) struct CGSize { float x1; float x2; } shadowOffset;
@property (nonatomic) float shadowOpacity;
@property (nonatomic) float shadowRadius;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } trackingWindFrame;

- (void).cxx_destruct;
- (void)beginMagnificationAnimated:(BOOL)arg1;
- (BOOL)canShowFullScreen;
- (void)continueMagnification;
- (id)delegate;
- (BOOL)gestureInNewLocation;
- (struct CGPoint { float x1; float x2; })gestureWindLocation;
- (void)hideMagnifiedThumbnailWithAnimation:(BOOL)arg1;
- (id)imageForIndexPath:(id)arg1;
- (id)imageForMagnifyLocation:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)initWithDelegate:(id)arg1;
- (id)installMagnifiedView;
- (BOOL)isValidMagnifyLocation:(struct CGPoint { float x1; float x2; })arg1;
- (id)itemIndexPath;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })itemWindFrame;
- (struct CGPoint { float x1; float x2; })lastLocation;
- (void)loadView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })magnifiedDragEdgeInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })magnifiedImageWindFrame;
- (struct CGSize { float x1; float x2; })magnifiedSize;
- (id)magnifiedView;
- (float)magnifiedYOffset;
- (void)prepareForRelease;
- (void)setDelegate:(id)arg1;
- (void)setGestureWindLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setItemIndexPath:(id)arg1;
- (void)setItemWindFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLastLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setMagnifiedDragEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setMagnifiedSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setMagnifiedView:(id)arg1;
- (void)setMagnifiedYOffset:(float)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setShadowOpacity:(float)arg1;
- (void)setShadowRadius:(float)arg1;
- (void)setTrackingWindFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setupMagnifiedView;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (float)shadowOpacity;
- (float)shadowRadius;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })trackingWindFrame;

@end
