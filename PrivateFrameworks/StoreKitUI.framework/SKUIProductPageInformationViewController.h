/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSOperationQueue, SKUIClientContext, SKUIContentRatingArtworkResourceLoader, SKUIProductInformationView, SKUIProductPageItem;

@interface SKUIProductPageInformationViewController : UIViewController <SKUIContentRatingArtworkLoaderObserver> {
    SKUIClientContext *_clientContext;
    SKUIContentRatingArtworkResourceLoader *_contentRatingArtworkLoader;
    SKUIProductInformationView *_informationView;
    SKUIProductPageItem *_item;
    NSOperationQueue *_operationQueue;
}

@property(readonly) SKUIClientContext * clientContext;
@property(readonly) SKUIProductPageItem * item;
@property(retain) NSOperationQueue * operationQueue;

- (void).cxx_destruct;
- (id)_contentRatingResourceLoader;
- (void)_updateLines:(id)arg1;
- (id)clientContext;
- (void)contentRatingArtworkLoader:(id)arg1 didLoadImage:(id)arg2 forContentRating:(id)arg3;
- (void)dealloc;
- (id)initWithItem:(id)arg1 clientContext:(id)arg2;
- (id)item;
- (void)loadView;
- (id)operationQueue;
- (void)setOperationQueue:(id)arg1;

@end