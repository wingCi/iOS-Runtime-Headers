/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class MPImageCache, MPImageCacheRequest;

@interface MPUCollectionViewCell : UICollectionViewCell {
    MPImageCache *_imageCache;
    MPImageCacheRequest *_imageRequest;
}

@property(retain) MPImageCache * imageCache;
@property(retain) MPImageCacheRequest * imageRequest;

- (void).cxx_destruct;
- (void)dealloc;
- (id)imageCache;
- (id)imageRequest;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setArtworkImage:(id)arg1;
- (void)setImageCache:(id)arg1;
- (void)setImageRequest:(id)arg1;

@end