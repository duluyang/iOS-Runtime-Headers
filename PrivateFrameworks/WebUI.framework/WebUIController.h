/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSTimer;

@interface WebUIController : NSObject {
    NSTimer *_showStatusBarSpinnerTimer;
}

- (void)_setShowStatusBarSpinnerTimer:(id)arg1;
- (void)_showStatusBarSpinner:(id)arg1;
- (BOOL)confirmIncreaseInQuotaWithAlertTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4;
- (void)setShowStatusBarSpinner:(BOOL)arg1;
- (void)webView:(id)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg2;
- (void)webView:(id)arg1 frame:(id)arg2 exceededDatabaseQuotaForSecurityOrigin:(id)arg3 database:(id)arg4;

@end