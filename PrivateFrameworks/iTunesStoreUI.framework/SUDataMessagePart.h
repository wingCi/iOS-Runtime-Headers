/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSData, NSString;

@interface SUDataMessagePart : SUMessagePart  {
    NSData *_data;
    NSString *_mimeType;
}

@property(readonly) NSData * data;


- (id)MIMEType;
- (id)data;
- (void)dealloc;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2;
- (id)newUnfilteredInputSource;

@end