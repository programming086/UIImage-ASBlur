//
//  UIImage+ASBlur.h
//  ASBlur
//
//  Created by Brovko Roman on 13.06.13.
//  Copyright (c) 2013 AshberrySoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <CoreImage/CoreImage.h>

@interface UIImage (DPBlur)

/**
 * - (UIImage *)getBlurredImage
 *
 * Возвращает изображение с блюром
 */

- (UIImage *)getBlurredImage;

/**
 * - (UIImage *)getDarkBlurredImage
 *
 * Возвращает изображение с темным блюром
 */

- (UIImage *)getDarkBlurredImage;

/**
 * - (UIImage *)getLightBlurredImage
 *
 * Возвращает изображение со светлым блюром
 */

- (UIImage *)getLightBlurredImage;

/**
 * - (UIImage *)getExtraLightBlurredImage
 *
 * Возвращает изображение с очень светлым блюром
 */

- (UIImage *)getExtraLightBlurredImage;

/**
 * - (UIImage *)getBlurredImageWithTintColor:
 *
 * Возвращает изображение с блюром и указанным оттенком
 *
 * @param Цвет оттенка
 */

- (UIImage *)getBlurredImageWithTintColor:(UIColor *)tintColor;

@end
