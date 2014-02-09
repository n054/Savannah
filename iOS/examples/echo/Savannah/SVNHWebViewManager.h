#import "SVNHPluginResult.h"

/*! 
 * A manager for a single UIWebView instance. Handles communication between the web page loaded in the UIWebView and a collection of Plugins.
 */
@interface SVNHWebViewManager : NSObject <UIWebViewDelegate>

/*!
 * Creates a new WebViewManager which manages the given WebView.
 * @param name the name of this WebViewManager. Useful for identifying WebViewManagers. Uniqueness is not enforced.
 * @param webView the WebView managed by this WebViewManager.
 * @param plugins a collection of Plugins to be made available to the WebView.
 * @param URL the initial URL to load into the WebView.
 */
- (id) initWithName:(NSString *)name
            WebView:(UIWebView *)webView
            plugins:(NSArray *)plugins
                URL:(NSURL *)URL;

/*!
 * Send the result of a Plugin execution to the UIWebView.
 * @param result the result to send.
 * @param callbackId the id of the callback that should receive the result.
 */
- (void) sendPluginResult:(SVNHPluginResult *)result
           withCallbackId:(NSString *)callbackId;

/*!
 * Executes the given script in the WebViewManager's WebView.
 * @param script the script to execute.
 * @return the result of the execution.
 */
- (NSString *) executeJavaScript:(NSString *)script;

/*!
 * Returns the name given to this WebViewManager.
 * @return the name given to this WebViewManager.
 */
@property (nonatomic, readonly) NSString *name;

@end
