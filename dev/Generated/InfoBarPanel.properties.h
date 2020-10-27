// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class InfoBarPanelProperties
{
public:
    InfoBarPanelProperties();

    static void SetHorizontalMargin(winrt::DependencyObject const& target, winrt::Thickness const& value);
    static winrt::Thickness GetHorizontalMargin(winrt::DependencyObject const& target);

    static void SetVerticalMargin(winrt::DependencyObject const& target, winrt::Thickness const& value);
    static winrt::Thickness GetVerticalMargin(winrt::DependencyObject const& target);

    static winrt::DependencyProperty HorizontalMarginProperty() { return s_HorizontalMarginProperty; }
    static winrt::DependencyProperty VerticalMarginProperty() { return s_VerticalMarginProperty; }

    static GlobalDependencyProperty s_HorizontalMarginProperty;
    static GlobalDependencyProperty s_VerticalMarginProperty;

    static void EnsureProperties();
    static void ClearProperties();
};
