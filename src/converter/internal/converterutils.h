/*
 * SPDX-License-Identifier: GPL-3.0-only
 * MuseScore-Studio-CLA-applies
 *
 * MuseScore Studio
 * Music Composition & Notation
 *
 * Copyright (C) 2021 MuseScore Limited
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#pragma once

#include "notation/inotation.h"
#include "notation/notationtypes.h"

namespace mu::converter {
class ConverterUtils
{
public:
    static muse::RetVal<notation::TransposeOptions> parseTransposeOptions(const std::string& optionsJson);
    static muse::RetVal<notation::TransposeOptions> parseTransposeOptions(const QJsonObject& optionsObj);

    static muse::Ret applyTranspose(const notation::INotationPtr notation, const std::string& optionsJson);
    static muse::Ret applyTranspose(const notation::INotationPtr notation, const notation::TransposeOptions& options);
};
}