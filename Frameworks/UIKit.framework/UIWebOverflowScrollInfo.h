/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebOverflowScrollInfo : NSObject {
    BOOL  _isUserScroll;
    DOMNode * _node;
    struct CGPoint { 
        float x; 
        float y; 
    }  _offset;
}

@property (nonatomic) BOOL isUserScroll;
@property (nonatomic, retain) DOMNode *node;
@property (nonatomic) struct CGPoint { float x1; float x2; } offset;

- (BOOL)coalesceScrollForNode:(id)arg1 offset:(struct CGPoint { float x1; float x2; })arg2 isUserScroll:(BOOL)arg3;
- (void)dealloc;
- (id)initWithNode:(id)arg1 offset:(struct CGPoint { float x1; float x2; })arg2 isUserScroll:(BOOL)arg3;
- (BOOL)isUserScroll;
- (id)node;
- (struct CGPoint { float x1; float x2; })offset;
- (void)setIsUserScroll:(BOOL)arg1;
- (void)setNode:(id)arg1;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;

@end
