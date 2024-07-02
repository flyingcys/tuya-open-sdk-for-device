/**
 * @file tuya_config.h
 * @brief IoT specific configuration file
 *
 * @copyright Copyright (c) 2021-2024 Tuya Inc. All Rights Reserved.
 */

#ifndef TUYA_CONFIG_H_
#define TUYA_CONFIG_H_

/**
 * @brief configure the product information
 *
 * TUYA_PRODUCT_KEY: PID, create on the Tuya IoT platform
 * TUYA_DEVICE_UUID: UUID, the unique ID of the device, you can get 2 free from
 * Tuya IoT platform TUYA_DEVICE_AUTHKEY: AUTHKEY, the private key of the
 * device, you can get 2 free from Tuya IoT platform
 *
 * detail please refer to:
 * https://developer.tuya.com/cn/docs/iot-device-dev/application-creation?id=Kbxw7ket3aujc
 *
 * warning: please replace these production information with your product key
 * and license, otherwise the demo cannot work.
 *
 */
// clang-format off
#error "Please replace these production information with PRODUCT_KEY && DEVICE_UUID && DEVICE_AUTHKEY, then delete this line"
#define TUYA_PRODUCT_KEY      "qhivvyqawogv04e4"                        // Please change your product key
#define TUYA_DEVICE_UUID      "uuidxxxxxxxxxxxxxxxx"                    // Please change the correct uuid
#define TUYA_DEVICE_AUTHKEY   "keyxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"        // Please change the correct authkey

/**
 * @brief PINCODE for AP provisioning
 * 
 * TUYA_NETCFG_PINCODE: a random PINCODE for AP provisioning, PINCODE was generated BY TUYA PMS system!!!
 * 
 * WARNING: PINCODE is mandatory for AP provisioning
 */
// #define TUYA_NETCFG_PINCODE   "69832860"

// clang-format on

#endif
