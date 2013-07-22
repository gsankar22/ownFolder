//
//  PrintingExampleViewController.h
//  PrintingExample
//
//  Created by Craig Spitzkoff on 6/9/11.
//  Copyright 2011 Raizlabs Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>
#import <QuickLook/QuickLook.h>


<<<<<<< HEAD
////////////////PDF prints //////////////////
=======
////////////////PDF prints /////////////////
//////My Changes ///////////////
>>>>>>> 9a1d7729ef1a505af3affc0d8496fe6f7fac884f

@interface PrintingExampleViewController : UIViewController <MFMailComposeViewControllerDelegate, UIActionSheetDelegate, QLPreviewControllerDataSource>{
    
    NSString* pdfFilePath;
}

- (IBAction)pdfPressed:(id)sender;

@property (nonatomic, retain) NSString* pdfFilePath;

@end
