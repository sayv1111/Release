﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "DemoReflection.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

/***********************************************************************
Reflection
***********************************************************************/

namespace vl
{
	namespace reflection
	{
		namespace description
		{
#ifndef VCZH_DEBUG_NO_REFLECTION
			IMPL_CPP_TYPE_INFO(demo::CategoryDisplayer)
			IMPL_CPP_TYPE_INFO(demo::CategoryDisplayerConstructor)
			IMPL_CPP_TYPE_INFO(demo::CategoryEditor)
			IMPL_CPP_TYPE_INFO(demo::CategoryEditorConstructor)
			IMPL_CPP_TYPE_INFO(demo::CategoryItemTemplate)
			IMPL_CPP_TYPE_INFO(demo::CategoryItemTemplateConstructor)
			IMPL_CPP_TYPE_INFO(demo::CategoryVisualizer)
			IMPL_CPP_TYPE_INFO(demo::CategoryVisualizerConstructor)
			IMPL_CPP_TYPE_INFO(demo::DataGridTabPage)
			IMPL_CPP_TYPE_INFO(demo::DataGridTabPageConstructor)
			IMPL_CPP_TYPE_INFO(demo::DateEditor)
			IMPL_CPP_TYPE_INFO(demo::DateEditorConstructor)
			IMPL_CPP_TYPE_INFO(demo::DateFilter)
			IMPL_CPP_TYPE_INFO(demo::DateFilterConstructor)
			IMPL_CPP_TYPE_INFO(demo::DocumentTabPage)
			IMPL_CPP_TYPE_INFO(demo::DocumentTabPageConstructor)
			IMPL_CPP_TYPE_INFO(demo::GenderDisplayer)
			IMPL_CPP_TYPE_INFO(demo::GenderDisplayerConstructor)
			IMPL_CPP_TYPE_INFO(demo::GenderEditor)
			IMPL_CPP_TYPE_INFO(demo::GenderEditorConstructor)
			IMPL_CPP_TYPE_INFO(demo::GenderItemTemplate)
			IMPL_CPP_TYPE_INFO(demo::GenderItemTemplateConstructor)
			IMPL_CPP_TYPE_INFO(demo::GenderVisualizer)
			IMPL_CPP_TYPE_INFO(demo::GenderVisualizerConstructor)
			IMPL_CPP_TYPE_INFO(demo::HyperlinkWindow)
			IMPL_CPP_TYPE_INFO(demo::HyperlinkWindowConstructor)
			IMPL_CPP_TYPE_INFO(demo::ListViewTabPage)
			IMPL_CPP_TYPE_INFO(demo::ListViewTabPageConstructor)
			IMPL_CPP_TYPE_INFO(demo::MainWindow)
			IMPL_CPP_TYPE_INFO(demo::MainWindowConstructor)
			IMPL_CPP_TYPE_INFO(demo::MyCategory)
			IMPL_CPP_TYPE_INFO(demo::MyDataItem)
			IMPL_CPP_TYPE_INFO(demo::MyGender)
			IMPL_CPP_TYPE_INFO(demo::MyTextItem)
			IMPL_CPP_TYPE_INFO(demo::TextBoxTabPage)
			IMPL_CPP_TYPE_INFO(demo::TextBoxTabPageConstructor)
			IMPL_CPP_TYPE_INFO(demo::TextEditor)
			IMPL_CPP_TYPE_INFO(demo::TextEditorConstructor)
			IMPL_CPP_TYPE_INFO(demo::TextListTabPage)
			IMPL_CPP_TYPE_INFO(demo::TextListTabPageConstructor)
			IMPL_CPP_TYPE_INFO(demo::TreeViewTabPage)
			IMPL_CPP_TYPE_INFO(demo::TreeViewTabPageConstructor)

#define _ ,
			BEGIN_CLASS_MEMBER(::demo::CategoryDisplayer)
				CLASS_MEMBER_CONSTRUCTOR(::demo::CategoryDisplayer*(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetCategory, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetCategory, { L"__vwsn_value_" })
				CLASS_MEMBER_EVENT(CategoryChanged)
				CLASS_MEMBER_FIELD(__vwsn_prop_Category)
				CLASS_MEMBER_PROPERTY_EVENT(Category, GetCategory, SetCategory, CategoryChanged)
			END_CLASS_MEMBER(::demo::CategoryDisplayer)

			BEGIN_CLASS_MEMBER(::demo::CategoryDisplayerConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::CategoryDisplayerConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::demo::CategoryDisplayerConstructor)

			BEGIN_CLASS_MEMBER(::demo::CategoryEditor)
				CLASS_MEMBER_CONSTRUCTOR(::demo::CategoryEditor*(), NO_PARAMETER)
				CLASS_MEMBER_FIELD(items)
			END_CLASS_MEMBER(::demo::CategoryEditor)

			BEGIN_CLASS_MEMBER(::demo::CategoryEditorConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::CategoryEditorConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(comboBox)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::demo::CategoryEditorConstructor)

			BEGIN_CLASS_MEMBER(::demo::CategoryItemTemplate)
				CLASS_MEMBER_CONSTRUCTOR(::demo::CategoryItemTemplate*(::demo::MyCategory), { L"__vwsn_ctor_parameter_SelectedCategory" })
				CLASS_MEMBER_METHOD(GetSelectedCategory, NO_PARAMETER)
				CLASS_MEMBER_FIELD(__vwsn_parameter_SelectedCategory)
				CLASS_MEMBER_PROPERTY_READONLY(SelectedCategory, GetSelectedCategory)
			END_CLASS_MEMBER(::demo::CategoryItemTemplate)

			BEGIN_CLASS_MEMBER(::demo::CategoryItemTemplateConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::CategoryItemTemplateConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(SelectedCategory)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::demo::CategoryItemTemplateConstructor)

			BEGIN_CLASS_MEMBER(::demo::CategoryVisualizer)
				CLASS_MEMBER_CONSTRUCTOR(::demo::CategoryVisualizer*(), NO_PARAMETER)
			END_CLASS_MEMBER(::demo::CategoryVisualizer)

			BEGIN_CLASS_MEMBER(::demo::CategoryVisualizerConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::CategoryVisualizerConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::demo::CategoryVisualizerConstructor)

			BEGIN_CLASS_MEMBER(::demo::DataGridTabPage)
				CLASS_MEMBER_CONSTRUCTOR(::demo::DataGridTabPage*(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_instance_ctor_, NO_PARAMETER)
			END_CLASS_MEMBER(::demo::DataGridTabPage)

			BEGIN_CLASS_MEMBER(::demo::DataGridTabPageConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::DataGridTabPageConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_10)
				CLASS_MEMBER_FIELD(__vwsn_precompile_11)
				CLASS_MEMBER_FIELD(__vwsn_precompile_12)
				CLASS_MEMBER_FIELD(__vwsn_precompile_13)
				CLASS_MEMBER_FIELD(__vwsn_precompile_14)
				CLASS_MEMBER_FIELD(__vwsn_precompile_15)
				CLASS_MEMBER_FIELD(__vwsn_precompile_16)
				CLASS_MEMBER_FIELD(__vwsn_precompile_17)
				CLASS_MEMBER_FIELD(__vwsn_precompile_18)
				CLASS_MEMBER_FIELD(__vwsn_precompile_19)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(__vwsn_precompile_9)
				CLASS_MEMBER_FIELD(comboView)
				CLASS_MEMBER_FIELD(dataGrid)
				CLASS_MEMBER_FIELD(dateFilter)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::demo::DataGridTabPageConstructor)

			BEGIN_CLASS_MEMBER(::demo::DateEditor)
				CLASS_MEMBER_CONSTRUCTOR(::demo::DateEditor*(), NO_PARAMETER)
			END_CLASS_MEMBER(::demo::DateEditor)

			BEGIN_CLASS_MEMBER(::demo::DateEditorConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::DateEditorConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(comboBox)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::demo::DateEditorConstructor)

			BEGIN_CLASS_MEMBER(::demo::DateFilter)
				CLASS_MEMBER_CONSTRUCTOR(::demo::DateFilter*(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_instance_ctor_, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetFilter, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetFilter, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(UpdateFilter, NO_PARAMETER)
				CLASS_MEMBER_FIELD(__vwsn_prop_Filter)
				CLASS_MEMBER_PROPERTY_READONLY(Filter, GetFilter)
				CLASS_MEMBER_FIELD(callback)
			END_CLASS_MEMBER(::demo::DateFilter)

			BEGIN_CLASS_MEMBER(::demo::DateFilterConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::DateFilterConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(checkFrom)
				CLASS_MEMBER_FIELD(checkTo)
				CLASS_MEMBER_FIELD(dateFrom)
				CLASS_MEMBER_FIELD(dateTo)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::demo::DateFilterConstructor)

			BEGIN_CLASS_MEMBER(::demo::DocumentTabPage)
				CLASS_MEMBER_CONSTRUCTOR(::demo::DocumentTabPage*(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_instance_ctor_, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetHasEditableSelection, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetHasEditableSelectionInSingleParagraph, NO_PARAMETER)
				CLASS_MEMBER_METHOD(HasEditableCursor, NO_PARAMETER)
				CLASS_MEMBER_METHOD(HasEditableHyperlink, { L"forEdit" })
				CLASS_MEMBER_METHOD(SelectAlignmentCommand, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetAlignment, { L"alignment" })
				CLASS_MEMBER_METHOD(SetEditMode, { L"editMode" })
				CLASS_MEMBER_METHOD(SetHasEditableSelection, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(SetHasEditableSelectionInSingleParagraph, { L"__vwsn_value_" })
				CLASS_MEMBER_EVENT(HasEditableSelectionChanged)
				CLASS_MEMBER_EVENT(HasEditableSelectionInSingleParagraphChanged)
				CLASS_MEMBER_FIELD(__vwsn_prop_HasEditableSelection)
				CLASS_MEMBER_FIELD(__vwsn_prop_HasEditableSelectionInSingleParagraph)
				CLASS_MEMBER_PROPERTY_EVENT(HasEditableSelection, GetHasEditableSelection, SetHasEditableSelection, HasEditableSelectionChanged)
				CLASS_MEMBER_PROPERTY_EVENT(HasEditableSelectionInSingleParagraph, GetHasEditableSelectionInSingleParagraph, SetHasEditableSelectionInSingleParagraph, HasEditableSelectionInSingleParagraphChanged)
			END_CLASS_MEMBER(::demo::DocumentTabPage)

			BEGIN_CLASS_MEMBER(::demo::DocumentTabPageConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::DocumentTabPageConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_10)
				CLASS_MEMBER_FIELD(__vwsn_precompile_11)
				CLASS_MEMBER_FIELD(__vwsn_precompile_12)
				CLASS_MEMBER_FIELD(__vwsn_precompile_13)
				CLASS_MEMBER_FIELD(__vwsn_precompile_14)
				CLASS_MEMBER_FIELD(__vwsn_precompile_15)
				CLASS_MEMBER_FIELD(__vwsn_precompile_16)
				CLASS_MEMBER_FIELD(__vwsn_precompile_17)
				CLASS_MEMBER_FIELD(__vwsn_precompile_18)
				CLASS_MEMBER_FIELD(__vwsn_precompile_19)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_20)
				CLASS_MEMBER_FIELD(__vwsn_precompile_21)
				CLASS_MEMBER_FIELD(__vwsn_precompile_22)
				CLASS_MEMBER_FIELD(__vwsn_precompile_23)
				CLASS_MEMBER_FIELD(__vwsn_precompile_24)
				CLASS_MEMBER_FIELD(__vwsn_precompile_25)
				CLASS_MEMBER_FIELD(__vwsn_precompile_26)
				CLASS_MEMBER_FIELD(__vwsn_precompile_27)
				CLASS_MEMBER_FIELD(__vwsn_precompile_28)
				CLASS_MEMBER_FIELD(__vwsn_precompile_29)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_30)
				CLASS_MEMBER_FIELD(__vwsn_precompile_31)
				CLASS_MEMBER_FIELD(__vwsn_precompile_32)
				CLASS_MEMBER_FIELD(__vwsn_precompile_33)
				CLASS_MEMBER_FIELD(__vwsn_precompile_34)
				CLASS_MEMBER_FIELD(__vwsn_precompile_35)
				CLASS_MEMBER_FIELD(__vwsn_precompile_36)
				CLASS_MEMBER_FIELD(__vwsn_precompile_37)
				CLASS_MEMBER_FIELD(__vwsn_precompile_38)
				CLASS_MEMBER_FIELD(__vwsn_precompile_39)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_40)
				CLASS_MEMBER_FIELD(__vwsn_precompile_41)
				CLASS_MEMBER_FIELD(__vwsn_precompile_42)
				CLASS_MEMBER_FIELD(__vwsn_precompile_43)
				CLASS_MEMBER_FIELD(__vwsn_precompile_44)
				CLASS_MEMBER_FIELD(__vwsn_precompile_45)
				CLASS_MEMBER_FIELD(__vwsn_precompile_46)
				CLASS_MEMBER_FIELD(__vwsn_precompile_47)
				CLASS_MEMBER_FIELD(__vwsn_precompile_48)
				CLASS_MEMBER_FIELD(__vwsn_precompile_49)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_50)
				CLASS_MEMBER_FIELD(__vwsn_precompile_51)
				CLASS_MEMBER_FIELD(__vwsn_precompile_52)
				CLASS_MEMBER_FIELD(__vwsn_precompile_53)
				CLASS_MEMBER_FIELD(__vwsn_precompile_54)
				CLASS_MEMBER_FIELD(__vwsn_precompile_55)
				CLASS_MEMBER_FIELD(__vwsn_precompile_56)
				CLASS_MEMBER_FIELD(__vwsn_precompile_57)
				CLASS_MEMBER_FIELD(__vwsn_precompile_58)
				CLASS_MEMBER_FIELD(__vwsn_precompile_59)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_60)
				CLASS_MEMBER_FIELD(__vwsn_precompile_61)
				CLASS_MEMBER_FIELD(__vwsn_precompile_62)
				CLASS_MEMBER_FIELD(__vwsn_precompile_63)
				CLASS_MEMBER_FIELD(__vwsn_precompile_64)
				CLASS_MEMBER_FIELD(__vwsn_precompile_65)
				CLASS_MEMBER_FIELD(__vwsn_precompile_66)
				CLASS_MEMBER_FIELD(__vwsn_precompile_67)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(__vwsn_precompile_9)
				CLASS_MEMBER_FIELD(buttonAlignment)
				CLASS_MEMBER_FIELD(buttonView)
				CLASS_MEMBER_FIELD(commandAlignCenter)
				CLASS_MEMBER_FIELD(commandAlignDefault)
				CLASS_MEMBER_FIELD(commandAlignLeft)
				CLASS_MEMBER_FIELD(commandAlignRight)
				CLASS_MEMBER_FIELD(commandBackColor)
				CLASS_MEMBER_FIELD(commandBold)
				CLASS_MEMBER_FIELD(commandColor)
				CLASS_MEMBER_FIELD(commandCopy)
				CLASS_MEMBER_FIELD(commandCut)
				CLASS_MEMBER_FIELD(commandDelete)
				CLASS_MEMBER_FIELD(commandEditHyperlink)
				CLASS_MEMBER_FIELD(commandEditable)
				CLASS_MEMBER_FIELD(commandFont)
				CLASS_MEMBER_FIELD(commandInsertImage)
				CLASS_MEMBER_FIELD(commandItalic)
				CLASS_MEMBER_FIELD(commandPaste)
				CLASS_MEMBER_FIELD(commandRedo)
				CLASS_MEMBER_FIELD(commandRemoveHyperlink)
				CLASS_MEMBER_FIELD(commandSelect)
				CLASS_MEMBER_FIELD(commandSelectable)
				CLASS_MEMBER_FIELD(commandStrike)
				CLASS_MEMBER_FIELD(commandUnderline)
				CLASS_MEMBER_FIELD(commandUndo)
				CLASS_MEMBER_FIELD(commandViewOnly)
				CLASS_MEMBER_FIELD(dialogColor)
				CLASS_MEMBER_FIELD(dialogFont)
				CLASS_MEMBER_FIELD(dialogMessage)
				CLASS_MEMBER_FIELD(dialogOpen)
				CLASS_MEMBER_FIELD(document)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::demo::DocumentTabPageConstructor)

			BEGIN_CLASS_MEMBER(::demo::GenderDisplayer)
				CLASS_MEMBER_CONSTRUCTOR(::demo::GenderDisplayer*(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetGender, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetGender, { L"__vwsn_value_" })
				CLASS_MEMBER_EVENT(GenderChanged)
				CLASS_MEMBER_FIELD(__vwsn_prop_Gender)
				CLASS_MEMBER_PROPERTY_EVENT(Gender, GetGender, SetGender, GenderChanged)
			END_CLASS_MEMBER(::demo::GenderDisplayer)

			BEGIN_CLASS_MEMBER(::demo::GenderDisplayerConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::GenderDisplayerConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::demo::GenderDisplayerConstructor)

			BEGIN_CLASS_MEMBER(::demo::GenderEditor)
				CLASS_MEMBER_CONSTRUCTOR(::demo::GenderEditor*(), NO_PARAMETER)
				CLASS_MEMBER_FIELD(items)
			END_CLASS_MEMBER(::demo::GenderEditor)

			BEGIN_CLASS_MEMBER(::demo::GenderEditorConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::GenderEditorConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(comboBox)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::demo::GenderEditorConstructor)

			BEGIN_CLASS_MEMBER(::demo::GenderItemTemplate)
				CLASS_MEMBER_CONSTRUCTOR(::demo::GenderItemTemplate*(::demo::MyGender), { L"__vwsn_ctor_parameter_SelectedGender" })
				CLASS_MEMBER_METHOD(GetSelectedGender, NO_PARAMETER)
				CLASS_MEMBER_FIELD(__vwsn_parameter_SelectedGender)
				CLASS_MEMBER_PROPERTY_READONLY(SelectedGender, GetSelectedGender)
			END_CLASS_MEMBER(::demo::GenderItemTemplate)

			BEGIN_CLASS_MEMBER(::demo::GenderItemTemplateConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::GenderItemTemplateConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(SelectedGender)
			END_CLASS_MEMBER(::demo::GenderItemTemplateConstructor)

			BEGIN_CLASS_MEMBER(::demo::GenderVisualizer)
				CLASS_MEMBER_CONSTRUCTOR(::demo::GenderVisualizer*(), NO_PARAMETER)
			END_CLASS_MEMBER(::demo::GenderVisualizer)

			BEGIN_CLASS_MEMBER(::demo::GenderVisualizerConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::GenderVisualizerConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::demo::GenderVisualizerConstructor)

			BEGIN_CLASS_MEMBER(::demo::HyperlinkWindow)
				CLASS_MEMBER_CONSTRUCTOR(::demo::HyperlinkWindow*(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetUrl, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetUrl, { L"__vwsn_value_" })
				CLASS_MEMBER_EVENT(UrlChanged)
				CLASS_MEMBER_FIELD(__vwsn_prop_Url)
				CLASS_MEMBER_PROPERTY_EVENT(Url, GetUrl, SetUrl, UrlChanged)
			END_CLASS_MEMBER(::demo::HyperlinkWindow)

			BEGIN_CLASS_MEMBER(::demo::HyperlinkWindowConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::HyperlinkWindowConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_10)
				CLASS_MEMBER_FIELD(__vwsn_precompile_11)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(__vwsn_precompile_9)
				CLASS_MEMBER_FIELD(self)
				CLASS_MEMBER_FIELD(textUrl)
			END_CLASS_MEMBER(::demo::HyperlinkWindowConstructor)

			BEGIN_CLASS_MEMBER(::demo::ListViewTabPage)
				CLASS_MEMBER_CONSTRUCTOR(::demo::ListViewTabPage*(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_instance_ctor_, NO_PARAMETER)
			END_CLASS_MEMBER(::demo::ListViewTabPage)

			BEGIN_CLASS_MEMBER(::demo::ListViewTabPageConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::ListViewTabPageConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_10)
				CLASS_MEMBER_FIELD(__vwsn_precompile_11)
				CLASS_MEMBER_FIELD(__vwsn_precompile_12)
				CLASS_MEMBER_FIELD(__vwsn_precompile_13)
				CLASS_MEMBER_FIELD(__vwsn_precompile_14)
				CLASS_MEMBER_FIELD(__vwsn_precompile_15)
				CLASS_MEMBER_FIELD(__vwsn_precompile_16)
				CLASS_MEMBER_FIELD(__vwsn_precompile_17)
				CLASS_MEMBER_FIELD(__vwsn_precompile_18)
				CLASS_MEMBER_FIELD(__vwsn_precompile_19)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_20)
				CLASS_MEMBER_FIELD(__vwsn_precompile_21)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(__vwsn_precompile_9)
				CLASS_MEMBER_FIELD(bindableListView)
				CLASS_MEMBER_FIELD(comboView)
				CLASS_MEMBER_FIELD(listView)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::demo::ListViewTabPageConstructor)

			BEGIN_CLASS_MEMBER(::demo::MainWindow)
				CLASS_MEMBER_CONSTRUCTOR(::demo::MainWindow*(), NO_PARAMETER)
			END_CLASS_MEMBER(::demo::MainWindow)

			BEGIN_CLASS_MEMBER(::demo::MainWindowConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::MainWindowConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_10)
				CLASS_MEMBER_FIELD(__vwsn_precompile_11)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(__vwsn_precompile_9)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::demo::MainWindowConstructor)

			BEGIN_ENUM_ITEM(::demo::MyCategory)
				ENUM_CLASS_ITEM(Black)
				ENUM_CLASS_ITEM(Blue)
				ENUM_CLASS_ITEM(Lime)
				ENUM_CLASS_ITEM(Red)
				ENUM_CLASS_ITEM(White)
			END_ENUM_ITEM(::demo::MyCategory)

			BEGIN_CLASS_MEMBER(::demo::MyDataItem)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::MyDataItem>(), NO_PARAMETER)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::MyDataItem>(const ::vl::WString&, ::demo::MyGender, ::demo::MyCategory, ::vl::DateTime, const ::vl::WString&), { L"name" _ L"gender" _ L"category" _ L"birthday" _ L"website" })
				CLASS_MEMBER_METHOD(GetBirthday, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetCategory, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetGender, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetLargeImage, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetName, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetSmallImage, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetWebsite, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetBirthday, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(SetCategory, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(SetGender, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(SetLargeImage, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(SetName, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(SetSmallImage, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(SetWebsite, { L"__vwsn_value_" })
				CLASS_MEMBER_FIELD(__vwsn_prop_Birthday)
				CLASS_MEMBER_FIELD(__vwsn_prop_Category)
				CLASS_MEMBER_FIELD(__vwsn_prop_Gender)
				CLASS_MEMBER_FIELD(__vwsn_prop_LargeImage)
				CLASS_MEMBER_FIELD(__vwsn_prop_Name)
				CLASS_MEMBER_FIELD(__vwsn_prop_SmallImage)
				CLASS_MEMBER_FIELD(__vwsn_prop_Website)
				CLASS_MEMBER_PROPERTY(Birthday, GetBirthday, SetBirthday)
				CLASS_MEMBER_PROPERTY(Category, GetCategory, SetCategory)
				CLASS_MEMBER_PROPERTY(Gender, GetGender, SetGender)
				CLASS_MEMBER_PROPERTY(LargeImage, GetLargeImage, SetLargeImage)
				CLASS_MEMBER_PROPERTY(Name, GetName, SetName)
				CLASS_MEMBER_PROPERTY(SmallImage, GetSmallImage, SetSmallImage)
				CLASS_MEMBER_PROPERTY(Website, GetWebsite, SetWebsite)
			END_CLASS_MEMBER(::demo::MyDataItem)

			BEGIN_ENUM_ITEM(::demo::MyGender)
				ENUM_CLASS_ITEM(Female)
				ENUM_CLASS_ITEM(Male)
			END_ENUM_ITEM(::demo::MyGender)

			BEGIN_CLASS_MEMBER(::demo::MyTextItem)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::MyTextItem>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetChecked, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetName, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetChecked, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(SetName, { L"__vwsn_value_" })
				CLASS_MEMBER_FIELD(__vwsn_prop_Checked)
				CLASS_MEMBER_FIELD(__vwsn_prop_Name)
				CLASS_MEMBER_PROPERTY(Checked, GetChecked, SetChecked)
				CLASS_MEMBER_PROPERTY(Name, GetName, SetName)
			END_CLASS_MEMBER(::demo::MyTextItem)

			BEGIN_CLASS_MEMBER(::demo::TextBoxTabPage)
				CLASS_MEMBER_CONSTRUCTOR(::demo::TextBoxTabPage*(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(UpdateFont, { L"newFont" })
				CLASS_MEMBER_EVENT(OnMakeFontLarger)
				CLASS_MEMBER_EVENT(OnMakeFontSmaller)
				CLASS_MEMBER_FIELD(flag)
			END_CLASS_MEMBER(::demo::TextBoxTabPage)

			BEGIN_CLASS_MEMBER(::demo::TextBoxTabPageConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::TextBoxTabPageConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_10)
				CLASS_MEMBER_FIELD(__vwsn_precompile_11)
				CLASS_MEMBER_FIELD(__vwsn_precompile_12)
				CLASS_MEMBER_FIELD(__vwsn_precompile_13)
				CLASS_MEMBER_FIELD(__vwsn_precompile_14)
				CLASS_MEMBER_FIELD(__vwsn_precompile_15)
				CLASS_MEMBER_FIELD(__vwsn_precompile_16)
				CLASS_MEMBER_FIELD(__vwsn_precompile_17)
				CLASS_MEMBER_FIELD(__vwsn_precompile_18)
				CLASS_MEMBER_FIELD(__vwsn_precompile_19)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_20)
				CLASS_MEMBER_FIELD(__vwsn_precompile_21)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(__vwsn_precompile_9)
				CLASS_MEMBER_FIELD(documentLabel)
				CLASS_MEMBER_FIELD(documentTextBox)
				CLASS_MEMBER_FIELD(documentViewer)
				CLASS_MEMBER_FIELD(self)
				CLASS_MEMBER_FIELD(textBoxM)
				CLASS_MEMBER_FIELD(textBoxS)
			END_CLASS_MEMBER(::demo::TextBoxTabPageConstructor)

			BEGIN_CLASS_MEMBER(::demo::TextEditor)
				CLASS_MEMBER_CONSTRUCTOR(::demo::TextEditor*(), NO_PARAMETER)
			END_CLASS_MEMBER(::demo::TextEditor)

			BEGIN_CLASS_MEMBER(::demo::TextEditorConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::TextEditorConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(self)
				CLASS_MEMBER_FIELD(textBox)
			END_CLASS_MEMBER(::demo::TextEditorConstructor)

			BEGIN_CLASS_MEMBER(::demo::TextListTabPage)
				CLASS_MEMBER_CONSTRUCTOR(::demo::TextListTabPage*(), NO_PARAMETER)
				CLASS_MEMBER_FIELD(counter)
				CLASS_MEMBER_FIELD(itemsToBind)
			END_CLASS_MEMBER(::demo::TextListTabPage)

			BEGIN_CLASS_MEMBER(::demo::TextListTabPageConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::TextListTabPageConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_10)
				CLASS_MEMBER_FIELD(__vwsn_precompile_11)
				CLASS_MEMBER_FIELD(__vwsn_precompile_12)
				CLASS_MEMBER_FIELD(__vwsn_precompile_13)
				CLASS_MEMBER_FIELD(__vwsn_precompile_14)
				CLASS_MEMBER_FIELD(__vwsn_precompile_15)
				CLASS_MEMBER_FIELD(__vwsn_precompile_16)
				CLASS_MEMBER_FIELD(__vwsn_precompile_17)
				CLASS_MEMBER_FIELD(__vwsn_precompile_18)
				CLASS_MEMBER_FIELD(__vwsn_precompile_19)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_20)
				CLASS_MEMBER_FIELD(__vwsn_precompile_21)
				CLASS_MEMBER_FIELD(__vwsn_precompile_22)
				CLASS_MEMBER_FIELD(__vwsn_precompile_23)
				CLASS_MEMBER_FIELD(__vwsn_precompile_24)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(__vwsn_precompile_9)
				CLASS_MEMBER_FIELD(bindableTextList)
				CLASS_MEMBER_FIELD(comboView)
				CLASS_MEMBER_FIELD(self)
				CLASS_MEMBER_FIELD(textList)
			END_CLASS_MEMBER(::demo::TextListTabPageConstructor)

			BEGIN_CLASS_MEMBER(::demo::TreeViewTabPage)
				CLASS_MEMBER_CONSTRUCTOR(::demo::TreeViewTabPage*(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_instance_ctor_, NO_PARAMETER)
				CLASS_MEMBER_FIELD(nodesToBind)
			END_CLASS_MEMBER(::demo::TreeViewTabPage)

			BEGIN_CLASS_MEMBER(::demo::TreeViewTabPageConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::TreeViewTabPageConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_10)
				CLASS_MEMBER_FIELD(__vwsn_precompile_11)
				CLASS_MEMBER_FIELD(__vwsn_precompile_12)
				CLASS_MEMBER_FIELD(__vwsn_precompile_13)
				CLASS_MEMBER_FIELD(__vwsn_precompile_14)
				CLASS_MEMBER_FIELD(__vwsn_precompile_15)
				CLASS_MEMBER_FIELD(__vwsn_precompile_16)
				CLASS_MEMBER_FIELD(__vwsn_precompile_17)
				CLASS_MEMBER_FIELD(__vwsn_precompile_18)
				CLASS_MEMBER_FIELD(__vwsn_precompile_19)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_20)
				CLASS_MEMBER_FIELD(__vwsn_precompile_21)
				CLASS_MEMBER_FIELD(__vwsn_precompile_22)
				CLASS_MEMBER_FIELD(__vwsn_precompile_23)
				CLASS_MEMBER_FIELD(__vwsn_precompile_24)
				CLASS_MEMBER_FIELD(__vwsn_precompile_25)
				CLASS_MEMBER_FIELD(__vwsn_precompile_26)
				CLASS_MEMBER_FIELD(__vwsn_precompile_27)
				CLASS_MEMBER_FIELD(__vwsn_precompile_28)
				CLASS_MEMBER_FIELD(__vwsn_precompile_29)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_30)
				CLASS_MEMBER_FIELD(__vwsn_precompile_31)
				CLASS_MEMBER_FIELD(__vwsn_precompile_32)
				CLASS_MEMBER_FIELD(__vwsn_precompile_33)
				CLASS_MEMBER_FIELD(__vwsn_precompile_34)
				CLASS_MEMBER_FIELD(__vwsn_precompile_35)
				CLASS_MEMBER_FIELD(__vwsn_precompile_36)
				CLASS_MEMBER_FIELD(__vwsn_precompile_37)
				CLASS_MEMBER_FIELD(__vwsn_precompile_38)
				CLASS_MEMBER_FIELD(__vwsn_precompile_39)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_40)
				CLASS_MEMBER_FIELD(__vwsn_precompile_41)
				CLASS_MEMBER_FIELD(__vwsn_precompile_42)
				CLASS_MEMBER_FIELD(__vwsn_precompile_43)
				CLASS_MEMBER_FIELD(__vwsn_precompile_44)
				CLASS_MEMBER_FIELD(__vwsn_precompile_45)
				CLASS_MEMBER_FIELD(__vwsn_precompile_46)
				CLASS_MEMBER_FIELD(__vwsn_precompile_47)
				CLASS_MEMBER_FIELD(__vwsn_precompile_48)
				CLASS_MEMBER_FIELD(__vwsn_precompile_49)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(__vwsn_precompile_9)
				CLASS_MEMBER_FIELD(bindableTreeView)
				CLASS_MEMBER_FIELD(self)
				CLASS_MEMBER_FIELD(treeView)
			END_CLASS_MEMBER(::demo::TreeViewTabPageConstructor)

#undef _
			class DemoTypeLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(::demo::CategoryDisplayer)
					ADD_TYPE_INFO(::demo::CategoryDisplayerConstructor)
					ADD_TYPE_INFO(::demo::CategoryEditor)
					ADD_TYPE_INFO(::demo::CategoryEditorConstructor)
					ADD_TYPE_INFO(::demo::CategoryItemTemplate)
					ADD_TYPE_INFO(::demo::CategoryItemTemplateConstructor)
					ADD_TYPE_INFO(::demo::CategoryVisualizer)
					ADD_TYPE_INFO(::demo::CategoryVisualizerConstructor)
					ADD_TYPE_INFO(::demo::DataGridTabPage)
					ADD_TYPE_INFO(::demo::DataGridTabPageConstructor)
					ADD_TYPE_INFO(::demo::DateEditor)
					ADD_TYPE_INFO(::demo::DateEditorConstructor)
					ADD_TYPE_INFO(::demo::DateFilter)
					ADD_TYPE_INFO(::demo::DateFilterConstructor)
					ADD_TYPE_INFO(::demo::DocumentTabPage)
					ADD_TYPE_INFO(::demo::DocumentTabPageConstructor)
					ADD_TYPE_INFO(::demo::GenderDisplayer)
					ADD_TYPE_INFO(::demo::GenderDisplayerConstructor)
					ADD_TYPE_INFO(::demo::GenderEditor)
					ADD_TYPE_INFO(::demo::GenderEditorConstructor)
					ADD_TYPE_INFO(::demo::GenderItemTemplate)
					ADD_TYPE_INFO(::demo::GenderItemTemplateConstructor)
					ADD_TYPE_INFO(::demo::GenderVisualizer)
					ADD_TYPE_INFO(::demo::GenderVisualizerConstructor)
					ADD_TYPE_INFO(::demo::HyperlinkWindow)
					ADD_TYPE_INFO(::demo::HyperlinkWindowConstructor)
					ADD_TYPE_INFO(::demo::ListViewTabPage)
					ADD_TYPE_INFO(::demo::ListViewTabPageConstructor)
					ADD_TYPE_INFO(::demo::MainWindow)
					ADD_TYPE_INFO(::demo::MainWindowConstructor)
					ADD_TYPE_INFO(::demo::MyCategory)
					ADD_TYPE_INFO(::demo::MyDataItem)
					ADD_TYPE_INFO(::demo::MyGender)
					ADD_TYPE_INFO(::demo::MyTextItem)
					ADD_TYPE_INFO(::demo::TextBoxTabPage)
					ADD_TYPE_INFO(::demo::TextBoxTabPageConstructor)
					ADD_TYPE_INFO(::demo::TextEditor)
					ADD_TYPE_INFO(::demo::TextEditorConstructor)
					ADD_TYPE_INFO(::demo::TextListTabPage)
					ADD_TYPE_INFO(::demo::TextListTabPageConstructor)
					ADD_TYPE_INFO(::demo::TreeViewTabPage)
					ADD_TYPE_INFO(::demo::TreeViewTabPageConstructor)
				}

				void Unload(ITypeManager* manager)
				{
				}
			};
#endif

			bool LoadDemoTypes()
			{
#ifndef VCZH_DEBUG_NO_REFLECTION
				if (auto manager = GetGlobalTypeManager())
				{
					return manager->AddTypeLoader(MakePtr<DemoTypeLoader>());
				}
#endif
				return false;
			}
		}
	}
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif
