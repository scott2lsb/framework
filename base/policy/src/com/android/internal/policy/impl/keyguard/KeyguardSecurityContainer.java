package com.android.internal.policy.impl.keyguard;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import android.widget.FrameLayout;

import com.android.internal.R;

public class KeyguardSecurityContainer extends FrameLayout {
    public KeyguardSecurityContainer(Context context, AttributeSet attrs) {
        this(context, attrs, 0);
    }

    public KeyguardSecurityContainer(Context context) {
        this(null, null, 0);
    }

    public KeyguardSecurityContainer(Context context, AttributeSet attrs, int defStyle) {
        super(context, attrs, defStyle);
    }

    KeyguardSecurityViewFlipper getFlipper() {
        for (int i = 0; i < getChildCount(); i++) {
            View child = getChildAt(i);
            if (child instanceof KeyguardSecurityViewFlipper) {
                return (KeyguardSecurityViewFlipper) child;
            }
        }
        return null;
    }

    public void showBouncer(int duration) {
        KeyguardSecurityViewFlipper flipper = getFlipper();
        if (flipper != null) {
            flipper.showBouncer(duration);
        }
    }

    public void hideBouncer(int duration) {
        KeyguardSecurityViewFlipper flipper = getFlipper();
        if (flipper != null) {
            flipper.hideBouncer(duration);
        }
    }
    
    /// M: Add for Incoming indicator feature, do not clip children when KeyguardSelectorView shown
    public void setClipChildrenForNewEventView(boolean clipChildren) {
        setClipChildren(clipChildren);
        KeyguardSecurityViewFlipper flipper = getFlipper();
        if (flipper != null) {
            flipper.setClipChildrenForNewEventView(clipChildren);
        }
    }
}

