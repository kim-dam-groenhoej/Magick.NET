//=================================================================================================
// Copyright 2013 Dirk Lemstra <http://magick.codeplex.com/>
//
// Licensed under the ImageMagick License (the "License"); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
//
//   http://www.imagemagick.org/script/license.php
//
// Unless required by applicable law or agreed to in writing, software distributed under the
// License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
// express or implied. See the License for the specific language governing permissions and
// limitations under the License.
//=================================================================================================
#pragma once

#include "Stdafx.h"

namespace ImageMagick
{
	///=============================================================================================
	///<summary>
	/// Specifies channel types.
	///</summary>
	[Flags]
	public enum class Channels
	{
		Undefined = MagickCore::UndefinedChannel,
		Red = MagickCore::RedChannel,
		Gray = MagickCore::GrayChannel,
		Cyan = MagickCore::CyanChannel,
		Green = MagickCore::GreenChannel,
		Magenta = MagickCore::MagentaChannel,
		Blue = MagickCore::BlueChannel,
		Yellow = MagickCore::YellowChannel,
		Alpha = MagickCore::AlphaChannel,
		Opacity = MagickCore::OpacityChannel,
		Black = MagickCore::BlackChannel,
		Index = MagickCore::IndexChannel,
		Composite = MagickCore::CompositeChannels,
		All = MagickCore::AllChannels,
		TrueAlpha= MagickCore::TrueAlphaChannel,
		RGB = MagickCore::RGBChannels,
		Grays = MagickCore::GrayChannels,
		Sync = MagickCore::SyncChannels,
		Default = ((All | Sync) &~ Opacity)
	} ;
}