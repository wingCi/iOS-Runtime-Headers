/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AASetupAssistantService, NSArray, NSTimer, NSMutableArray, NSMutableDictionary;

@interface AADelegateAccountSetupHelper : NSObject  {
    AASetupAssistantService *_aaService;
    NSArray *_delegatesToSetup;
    NSMutableArray *_pendingCompletionBundles;
    NSMutableDictionary *_assistantDelegates;
    NSTimer *_delegatesTimeout;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

}


- (void).cxx_destruct;
- (id)init;
- (void)setupiCloudDelegateWithUsername:(id)arg1 password:(id)arg2 emailChoice:(id)arg3 withHandler:(id)arg4;
- (void)setupAppleIDDelegatesWithUsername:(id)arg1 password:(id)arg2 emailChoice:(id)arg3 withHandler:(id)arg4;
- (void)_completeDelegateSetupWithResponse:(id)arg1;
- (id)_loadAssistantDelegateBundles;
- (void)_delegateBundlesDidTimeout;
- (id)_adjustResponseDictionary:(id)arg1 forAssistantDelegate:(id)arg2 withIdentifier:(id)arg3;
- (void)_storeDelegateTokensWithResponse:(id)arg1;
- (void)_delegateBundlesFinished;
- (void)_setupDelegateAccountsWithEmailChoice:(id)arg1;

@end