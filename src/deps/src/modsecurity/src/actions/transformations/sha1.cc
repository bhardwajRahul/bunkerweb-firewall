/*
 * ModSecurity, http://www.modsecurity.org/
 * Copyright (c) 2015 - 2021 Trustwave Holdings, Inc. (http://www.trustwave.com/)
 *
 * You may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * If any of the files related to licensing are missing or if you have any
 * other questions related to licensing please contact Trustwave Holdings, Inc.
 * directly using the email address security@modsecurity.org.
 *
 */

#include "sha1.h"

#include "src/utils/sha1.h"


namespace modsecurity::actions::transformations {


bool Sha1::transform(std::string &value, const Transaction *trans) const {
    value = Utils::Sha1::digest(value);
    return true;
}


}  // namespace modsecurity::actions::transformations
