/*
 * Copyright 2017 The Imaging Source Europe GmbH
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TCAM_GENICAM_PROPERTY_MAPPING_H
#define TCAM_GENICAM_PROPERTY_MAPPING_H

#include "standard_properties.h"

#include <vector>
#include <algorithm>
#include <string>

using namespace tcam;


struct aravis_property
{
    TCAM_PROPERTY_ID id;
    std::vector<std::string> genicam_name; // list of genicam identifiers that shall be mapped to control
};


static std::vector<struct aravis_property> aravis_mappings =
{
    {
        .id = TCAM_PROPERTY_INVALID,
        .genicam_name = {},
    },
    {
        .id = TCAM_PROPERTY_EXPOSURE,
        .genicam_name = {"ExposureTime"},
    },
    {
        .id = TCAM_PROPERTY_EXPOSURE_AUTO,
        .genicam_name = {"ExposureAuto"},
    },
    {
        .id = TCAM_PROPERTY_HIGHLIGHT_REDUCTION,
        .genicam_name = {"ExposureAutoHighlighReduction"},
    },
    {
        .id = TCAM_PROPERTY_AUTO_REFERENCE,
        .genicam_name = {"ExposureAutoReference"},
    },
    {
        .id = TCAM_PROPERTY_EXPOSURE_AUTO_UPPER_LIMIT_AUTO,
        .genicam_name = {"ExposureAutoUpperLimitAuto"},
    },
    {
        .id = TCAM_PROPERTY_EXPOSURE_AUTO_UPPER_LIMIT,
        .genicam_name = {"ExposureAutoUpperLimit"},
    },
    {
        .id = TCAM_PROPERTY_EXPOSURE_AUTO_LOWER_LIMIT,
        .genicam_name = {"ExposureAutoLowerLimit"},
    },
    {
        .id = TCAM_PROPERTY_GAIN,
        .genicam_name = {"Gain"},
    },
    {
        .id = TCAM_PROPERTY_GAIN_AUTO,
        .genicam_name = {"GainAuto"},
    },
    {
        .id = TCAM_PROPERTY_GAIN_RED,
        .genicam_name = {},
    },
    {
        .id = TCAM_PROPERTY_GAIN_GREEN,
        .genicam_name = {},
    },
    {
        .id = TCAM_PROPERTY_GAIN_BLUE,
        .genicam_name = {},
    },
    {
        .id = TCAM_PROPERTY_GAIN_AUTO_UPPER_LIMIT,
        .genicam_name = {"GainAutoUpperLimit"},
    },
    {
        .id = TCAM_PROPERTY_GAIN_AUTO_LOWER_LIMIT,
        .genicam_name = {"GainAutoLowerLimit"},
    },
    {
        .id = TCAM_PROPERTY_TRIGGER_MODE,
        .genicam_name = {"TriggerMode"},
    },
    {
        .id = TCAM_PROPERTY_TRIGGER_SOURCE,
        .genicam_name = {"TriggerSource"},
    },
    {
        .id = TCAM_PROPERTY_TRIGGER_ACTIVATION,
        .genicam_name = {"TriggerActivation"},
    },
    {
        .id = TCAM_PROPERTY_SOFTWARETRIGGER,
        .genicam_name = {"TriggerSoftware"},
    },
    {
        .id = TCAM_PROPERTY_TRIGGER_DENOISE,
        .genicam_name = {"TriggerDenoise"},
    },
    {
        .id = TCAM_PROPERTY_TRIGGER_MASK,
        .genicam_name = {"TriggerMask"},
    },
    {
        .id = TCAM_PROPERTY_TRIGGER_DEBOUNCER,
        .genicam_name = {"TriggerDebouncer"},
    },
    {
        .id = TCAM_PROPERTY_TRIGGER_DELAY,
        .genicam_name = {"TriggerDelay"},
    },
    {
        .id = TCAM_PROPERTY_TRIGGER_SELECTOR,
        .genicam_name = {"TriggerSelector"},
    },
    {
        .id = TCAM_PROPERTY_TRIGGER_OPERATION,
        .genicam_name = {"TriggerOperation"},
    },
    {
        .id = TCAM_PROPERTY_GPIO,
        .genicam_name = {"GPIO"},
    },
    {
        .id = TCAM_PROPERTY_GPIN,
        .genicam_name = {"GPIn"},
    },
    {
        .id = TCAM_PROPERTY_GPOUT,
        .genicam_name = {"GPOut"},
    },
    {
        .id = TCAM_PROPERTY_OFFSET_X,
        .genicam_name = {"OffsetX"},
    },
    {
        .id = TCAM_PROPERTY_OFFSET_Y,
        .genicam_name = {"OffsetY"},
    },
    {
        .id = TCAM_PROPERTY_OFFSET_AUTO,
        .genicam_name = {"OffsetAutoCenter"},
    },
    {
        .id = TCAM_PROPERTY_BRIGHTNESS,
        .genicam_name = {"Brightness"},
    },
    {
        .id = TCAM_PROPERTY_CONTRAST,
        .genicam_name = {"Contrast"},
    },
    {
        .id = TCAM_PROPERTY_SATURATION,
        .genicam_name = {"Saturation"},
    },
    {
        .id = TCAM_PROPERTY_HUE,
        .genicam_name = {"Hue"},
    },
    {
        .id = TCAM_PROPERTY_GAMMA,
        .genicam_name = {"Gamma"},
    },
    {
        .id = TCAM_PROPERTY_WB_AUTO,
        .genicam_name = {"BalanceWhiteAuto"},
    },
    {
        .id = TCAM_PROPERTY_WB_MODE,
        .genicam_name = {"BalanceWhiteMode"},
    },
    {
        .id = TCAM_PROPERTY_WB_TEMPERATURE,
        .genicam_name = {"BalanceWhiteTemperature"},
    },
    {
        .id = TCAM_PROPERTY_BALANCERATIO_SELECTOR,
        .genicam_name = {"BalanceRatioSelector"}
    },
    {
        .id = TCAM_PROPERTY_BALANCERATIO,
        .genicam_name = {"BalanceRatio"}
    },
    {
        .id = TCAM_PROPERTY_BALANCE_WHITE_AUTO_PRESET,
        .genicam_name = {"BalanceWhiteAutoPreset"}
    },
    {
        .id = TCAM_PROPERTY_BALANCE_WHITE_TEMPERATURE_PRESET,
        .genicam_name = {"BalanceWhiteTemperaturePreset"}
    },
    {
        .id = TCAM_PROPERTY_IRCUT,
        .genicam_name = {"IRCutFilter"},
    },
    {
        .id = TCAM_PROPERTY_IRIS,
        .genicam_name = {"Iris"},
    },
    {
        .id = TCAM_PROPERTY_FOCUS,
        .genicam_name = {"Focus"},
    },
    {
        .id = TCAM_PROPERTY_ZOOM,
        .genicam_name = {"Zoom"},
    },
    {
        .id = TCAM_PROPERTY_FOCUS_AUTO,
        .genicam_name = {"FocusAuto"},
    },
    {
        .id = TCAM_PROPERTY_STROBE_ENABLE,
        .genicam_name = {"StrobeEnable"},
    },
    {
        .id = TCAM_PROPERTY_STROBE_OPERATION,
        .genicam_name = {"StrobeOperation"},
    },
    {
        .id = TCAM_PROPERTY_STROBE_POLARITY,
        .genicam_name = {"StrobePolarity"},
    },
    {
        .id = TCAM_PROPERTY_STROBE_DELAY,
        .genicam_name = {"StrobeDelay"},
    },
    {
        .id = TCAM_PROPERTY_STROBE_DURATION,
        .genicam_name = {"StrobeDuration"},
    },
    {
        .id = TCAM_PROPERTY_BINNING,
        .genicam_name = {"Binning"},
    },
    {
        .id = TCAM_PROPERTY_BINNING_VERTICAL,
        .genicam_name = {"BinningHorizontal"},
    },
    {
        .id = TCAM_PROPERTY_BINNING_HORIZONTAL,
        .genicam_name = {"BinningVertical"},
    },
    {
        .id = TCAM_PROPERTY_BLACKLEVEL,
        .genicam_name = {"BlackLevel"},
    },
    {
        .id = TCAM_PROPERTY_CHUNK_MODE_ACTIVE,
        .genicam_name = {"ChunkModeActive"},
    },
    {
        .id = TCAM_PROPERTY_STREAM_CHANNEL_COUNT,
        .genicam_name = {"DeviceStreamChannelCount"},
    },
    {
        .id = TCAM_PROPERTY_STREAM_CHANNEL_SELECTOR,
        .genicam_name = {"DeviceStreamChannelSelector"},
    },
    {
        .id = TCAM_PROPERTY_STREAM_CHANNEL_TYPE,
        .genicam_name = {"DeviceStreamChannelType"},
    },
    {
        .id = TCAM_PROPERTY_STREAM_CHANNEL_LINK,
        .genicam_name = {"DeviceStreamChannelLink"},
    },
    {
        .id = TCAM_PROPERTY_STREAM_CHANNEL_ENDIANNESS,
        .genicam_name = {"DeviceStreamChannelEndianness"},
    },
    {
        .id = TCAM_PROPERTY_STREAM_CHANNEL_PACKET_SIZE,
        .genicam_name = {"DeviceStreamChannelPacketSize"},
    },
    {
        .id = TCAM_PROPERTY_EVENT_CHANNEL_COUNT,
        .genicam_name = {"DeviceStreamChannelPacketSize"},
    },
    {
        .id = TCAM_PROPERTY_PAYLOAD_SIZE,
        .genicam_name = {"PayloadSize"},
    },
    {
        .id = TCAM_PROPERTY_PAYLOAD_PER_FRAME,
        .genicam_name = {"PayloadPerFrame"},
    },
    {
        .id = TCAM_PROPERTY_PAYLOAD_PER_PACKET,
        .genicam_name = {"PayloadPerPacket"},
    },
    {
        .id = TCAM_PROPERTY_TOTAL_PACKET_SIZE,
        .genicam_name = {"TotalPacketSize"},
    },
    {
        .id = TCAM_PROPERTY_PACKETS_PER_FRAME,
        .genicam_name = {"PacketsPerFrame"},
    },
    {
        .id = TCAM_PROPERTY_PACKET_TIME_US,
        .genicam_name = {"PacketTimeUS"},
    },
    {
        .id = TCAM_PROPERTY_REVERSE_X,
        .genicam_name = {"ReverseX"},
    },
    {
        .id = TCAM_PROPERTY_REVERSE_Y,
        .genicam_name = {"ReverseY"},
    },
    {
        .id = TCAM_PROPERTY_CHUNK_IMX174_FRAME_ID,
        .genicam_name = {"ChunkIMX174FrameId"},
    },
    {
        .id = TCAM_PROPERTY_CHUNK_IMX174_FRAME_SET,
        .genicam_name = {"ChunkIMX174FrameSet"},
    },
    {
        .id = TCAM_PROPERTY_IMX174_WDR_SHUTTER2,
        .genicam_name = {"IMX174WDRShutter2"},
    },
    {
        .id = TCAM_PROPERTY_IMX174_HARDWARE_WDR_ENABLE,
        .genicam_name = {"IMX174HardwareWDREnable"},
    },
};


static TCAM_PROPERTY_ID find_mapping (const std::string& genicam_id)
{
    auto f = [&genicam_id] (std::string p)
        {
            if (genicam_id == p)
                return true;
            return false;
        };

    for (const auto& m : aravis_mappings)
    {
        auto match = std::find_if(m.genicam_name.begin(), m.genicam_name.end(), f);

        if (match != m.genicam_name.end())
            return m.id;
    }
    return TCAM_PROPERTY_INVALID;
}


#endif /* TCAM_GENICAM_PROPERTY_MAPPING_H */
