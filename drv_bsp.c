/**
 * @file drv_bsp.c
 * @author yssickjgd (1345578933@qq.com)
 * @brief A板级支持包
 * @version 0.1
 * @date 2022-08-02
 *
 * @copyright USTC-RoboWalker (c) 2022
 *
 */

 /* Includes ------------------------------------------------------------------*/

#include "drv_bsp.h"

/* Private macros ------------------------------------------------------------*/

/* Private types -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private function declarations ---------------------------------------------*/

/* Function prototypes -------------------------------------------------------*/

/**
 * @brief 初始化全局板级支持包相关
 *
 * @param Status 控制状态的位掩码
 */
void BSP_Init(uint32_t Status)
{
    BSP_DC24_LU(((Status & BSP_DC24_LU_ON) == 0 ? BSP_DC24_Status_DISABLED : BSP_DC24_Status_ENABLED));
    BSP_DC24_LD(((Status & BSP_DC24_LD_ON) == 0 ? BSP_DC24_Status_DISABLED : BSP_DC24_Status_ENABLED));
    BSP_DC24_RU(((Status & BSP_DC24_RU_ON) == 0 ? BSP_DC24_Status_DISABLED : BSP_DC24_Status_ENABLED));
    BSP_DC24_RD(((Status & BSP_DC24_RD_ON) == 0 ? BSP_DC24_Status_DISABLED : BSP_DC24_Status_ENABLED));

    BSP_LED_R(((Status & BSP_LED_R_ON) == 0 ? BSP_LED_Status_DISABLED : BSP_LED_Status_ENABLED));
    BSP_LED_G(((Status & BSP_LED_G_ON) == 0 ? BSP_LED_Status_DISABLED : BSP_LED_Status_ENABLED));

    BSP_LED_1(((Status & BSP_LED_1_ON) == 0 ? BSP_LED_Status_DISABLED : BSP_LED_Status_ENABLED));
    BSP_LED_2(((Status & BSP_LED_2_ON) == 0 ? BSP_LED_Status_DISABLED : BSP_LED_Status_ENABLED));
    BSP_LED_3(((Status & BSP_LED_3_ON) == 0 ? BSP_LED_Status_DISABLED : BSP_LED_Status_ENABLED));
    BSP_LED_4(((Status & BSP_LED_4_ON) == 0 ? BSP_LED_Status_DISABLED : BSP_LED_Status_ENABLED));
    BSP_LED_5(((Status & BSP_LED_5_ON) == 0 ? BSP_LED_Status_DISABLED : BSP_LED_Status_ENABLED));
    BSP_LED_6(((Status & BSP_LED_6_ON) == 0 ? BSP_LED_Status_DISABLED : BSP_LED_Status_ENABLED));
    BSP_LED_7(((Status & BSP_LED_7_ON) == 0 ? BSP_LED_Status_DISABLED : BSP_LED_Status_ENABLED));
    BSP_LED_8(((Status & BSP_LED_8_ON) == 0 ? BSP_LED_Status_DISABLED : BSP_LED_Status_ENABLED));
}

/**
 * @brief 左上角DC24
 *
 * @param Status 状态
 */
void BSP_DC24_LU(enum Enum_BSP_DC24_Status Status)
{
    HAL_GPIO_WritePin(GPIOH, GPIO_PIN_5, Status);
}

/**
 * @brief 左下角DC24
 *
 * @param Status 状态
 */
void BSP_DC24_LD(enum Enum_BSP_DC24_Status Status)
{
    HAL_GPIO_WritePin(GPIOH, GPIO_PIN_4, Status);
}

/**
 * @brief 右上角DC24
 *
 * @param Status 状态
 */
void BSP_DC24_RU(enum Enum_BSP_DC24_Status Status)
{
    HAL_GPIO_WritePin(GPIOH, GPIO_PIN_3, Status);
}

/**
 * @brief 右下角DC24
 *
 * @param Status 状态
 */
void BSP_DC24_RD(enum Enum_BSP_DC24_Status Status)
{
    HAL_GPIO_WritePin(GPIOH, GPIO_PIN_2, Status);
}

/**
 * @brief 红色LED
 *
 * @param Status 状态
 */
void BSP_LED_R(enum Enum_BSP_LED_Status Status)
{
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_11, Status);
}

/**
 * @brief 绿色LED
 *
 * @param Status 状态
 */
void BSP_LED_G(enum Enum_BSP_LED_Status Status)
{
    HAL_GPIO_WritePin(GPIOF, GPIO_PIN_14, Status);
}

/**
 * @brief 1号LED
 *
 * @param Status 状态
 */
void BSP_LED_1(enum Enum_BSP_LED_Status Status)
{
    HAL_GPIO_WritePin(GPIOG, GPIO_PIN_1, Status);
}

/**
 * @brief 2号LED
 *
 * @param Status 状态
 */
void BSP_LED_2(enum Enum_BSP_LED_Status Status)
{
    HAL_GPIO_WritePin(GPIOG, GPIO_PIN_2, Status);
}

/**
 * @brief 3号LED
 *
 * @param Status 状态
 */
void BSP_LED_3(enum Enum_BSP_LED_Status Status)
{
    HAL_GPIO_WritePin(GPIOG, GPIO_PIN_3, Status);
}

/**
 * @brief 4号LED
 *
 * @param Status 状态
 */
void BSP_LED_4(enum Enum_BSP_LED_Status Status)
{
    HAL_GPIO_WritePin(GPIOG, GPIO_PIN_4, Status);
}

/**
 * @brief 5号LED
 *
 * @param Status 状态
 */
void BSP_LED_5(enum Enum_BSP_LED_Status Status)
{
    HAL_GPIO_WritePin(GPIOG, GPIO_PIN_5, Status);
}

/**
 * @brief 6号LED
 *
 * @param Status 状态
 */
void BSP_LED_6(enum Enum_BSP_LED_Status Status)
{
    HAL_GPIO_WritePin(GPIOG, GPIO_PIN_6, Status);
}

/**
 * @brief 7号LED
 *
 * @param Status 状态
 */
void BSP_LED_7(enum Enum_BSP_LED_Status Status)
{
    HAL_GPIO_WritePin(GPIOG, GPIO_PIN_7, Status);
}

/**
 * @brief 8号LED
 *
 * @param Status 状态
 */
void BSP_LED_8(enum Enum_BSP_LED_Status Status)
{
    HAL_GPIO_WritePin(GPIOG, GPIO_PIN_8, Status);
}