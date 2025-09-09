# Flame-LED-Strip
Uses microcontrollers to determine time of day, then activates or deactivates the flame LED strip based on those conditions

## Use Case
Used for that of repairing a pre-existing model with all parts already on hand however a DIY version can be made if parts bought separately 

## Features
 - Charges a single AA battery from solar panel
 - Discharges to an LED strip at night
 - Override switch to turn on/off system manually
 - Designed for hanging lamp that mimics active fire inside

## Components
| Components | Description | Link |
|------------|-------------|------|
| Resistor | regulate voltage/current flow | [Amazon]() |
| Inductor | equalize transition from night to day | [Amazon](https://www.amazon.com/dp/B0CL4SC9KL?ref=ppx_yo2ov_dt_b_fed_asin_title&th=1) |
| YX805 TO-94 | switching and voltage boosting driver | [Amazon](https://www.amazon.com/dp/B07DNV323B?ref=ppx_yo2ov_dt_b_fed_asin_title) |
| AA Battery holder | holds the AA battery firmly in place | [Amazon](https://www.amazon.com/dp/B07BXX62JF?ref=ppx_yo2ov_dt_b_fed_asin_title) |
| Prefboard | used to solder everything together | [Amazon](https://www.amazon.com/dp/B072Z7Y19F?ref=ppx_yo2ov_dt_b_fed_asin_title)
| Solar Flame LED | LED that mimics flame | [Amazon](https://www.amazon.com/LiebeWH-Electrical-Supplies-Material-Homemade/dp/B0BQMJBM9B/ref=sr_1_1?crid=XVY7KAILPPOQ&dib=eyJ2IjoiMSJ9.JaTmC_HEjecCoufytHc90FKjJ8NtIXdDoSy9mjFobWZVJUpRK0RIuXbFpkSHJKe0fkj970FgTuDeD9HqiRqfJw._Wah7clzG6JG5gYejPpuASxDk3xXOy58NWWI_JV8Gac&dib_tag=se&keywords=LiebeWH+solar+flame+light+circuit+board+12&qid=1756832004&sprefix=liebewh+solar+flame+light+circuit+board+12%2Caps%2C79&sr=8-1)
| 30 AWG wire | used for connecting terminals | [Amazon](https://www.amazon.com/BNTECHGO-Silicone-Flexible-Strands-Stranded/dp/B01M7ZBW2X/ref=sr_1_1_sspa?crid=3G417XH51Z81P&dib=eyJ2IjoiMSJ9.lAwUU03dt_z1S5KuWxvQy-WObzwA_uklDrVOkJmDlkolxLtwGWvQ1U8uG95TC0OyhTFw5AToJKo7seHnHwQtQiygxUDHQPQrIHM4JTKTPcY7yIg811bc06JtJKrL3GaOUuVcir_7ut8Qzc0LDFPe4D1dWn2xzyZSbXqai-q73MacEEYkIZS7OEXBRgO64J88naeuOGgad4CowdFvyHMwb88X2-0Z-O-eeIOC_a204pizbamfl2Yb_WhhgVOXk_2l-Qnp2o39j_fZuvv-PUVqmXj4KCANKuYAjQs3hidqcHk.41M5Ke4_IStPqe7EsvdwIMAXOwfs9pjCN8fN2Ld8FEQ&dib_tag=se&keywords=30+awg+wire&qid=1756832074&sprefix=30awg+wir%2Caps%2C116&sr=8-1-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1) |
| AA Rechargeable Battery | rechargeable AA battery with high Ah | [Amazon](https://www.amazon.com/EBL-Rechargeable-Batteries-2800mAh-Ready2Charge/dp/B00DNPT1AO/ref=sr_1_3_sspa?crid=3ANOJXQCL4T1N&dib=eyJ2IjoiMSJ9.IeQVFU_AFAfuPKxus30K8-Dmf8yakVeu-2t7XfLaSqbSPHaugoXD4-5ODh3A2RPdgeVlIMJ6IZG3LQk2cSpke_eyk8g7GFrSRrAd__JsjRxtDgQB9M0Ws5F5cRndSvExEsELH3NKxBFIkaw0SyHic3m5BfBT7tTXhjW4fE49GYjAZrsccv9yyQrqGojPaM7xhZql1sMi8Z6CSs50Evbq33gnhZbPSUhomRJ-LJ_T6WUrGquZaU5K1qAsCjSkbLaU2poWL9ULL_AmE1H7oE3YY6WnLHWL4WHayS4GQhodxFY.x49KVJP6Yp8cd6abF9xjyuDSjes4kiM2vG9F96_J6Bo&dib_tag=se&keywords=aa+rechargeable+batteries&qid=1756832137&sprefix=aa+recharge%2Caps%2C126&sr=8-3-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1) |
| Push Button | button for manual override | [Amazon](https://www.amazon.com/Momentary-Tactile-Through-Breadboard-Friendly/dp/B07WF76VHT/ref=sr_1_7?crid=2ZUETI6SB1MMA&dib=eyJ2IjoiMSJ9.mDkrzwa0Dp8mcNoVe2UCIud6iwiB-GkbUxtcMr2pkY2mkMzqoBHpKNSN7mM5ZefEancYF0aDhF6S6RpukjHKK3cUQ19ogTn2wlIuu9HuyjZkB1ecj63No-SjiVYdHMvaFGqWoXE_nptUvOC71zjMWvpnGvpYllrbHa1IRgY0Ay783O4AgbrOKuAMhBvV1Vze3IAMLVNPT2Ts48KpB0SinxdVfdWXSKM_3OwZByCAwtlHWJey88PTAyDZBI1T5jN5tanhXiI0VOUjegVo6LT3zTeThfVoox7LbZINtUkEwnE.yIYboRq85oRv3UQsOronmOg6k48jnm8rV9CN_0ljj20&dib_tag=se&keywords=small+button&qid=1756832164&sprefix=small+button%2Caps%2C125&sr=8-7) |
| Solar Panel | used to power and charge the battery during daytime | [Amazon](https://www.amazon.com/Replacement-Waterproof-Lantern-Lanterns-Openings/dp/B0DHWSFKY7/ref=sr_1_11?crid=2JUXV6ZH8SVFM&dib=eyJ2IjoiMSJ9.Vaz6F3jjhG6Py_ZCl4IzFUaYm4JZGLIIuIW6zDADXn6LZqsnIIZfV5k4o_aFQ-TWA0cUlJrsFCW4mqB3m9fp2nNpU5mHp6KCX-zx3u4cwngmhW7Fwi4CbdO1FUOvusDonYrxQ04tvSf4yQu1jm7TDvhJ6pmXWyeCnqSpkf8deFFhcNY5nrW9g_TyQVaECYoB9Aq1yxD2o4RvljepQNpTh0UA9ja7F3ZomQaKClpMatk.GrqyxpOcCb7ZesjJQBl1EM9ygpF7Yc0smUM30qVXXDk&dib_tag=se&keywords=round%2Bsolar%2Bpanel&qid=1756832204&sprefix=round%2Bsolar%2Bpanel%2Caps%2C120&sr=8-11&th=1) |
| 1N5819 Diode | protect from reverse polarity | [Amazon](https://www.amazon.com/100-Pieces-1N5819-Schottky-Rectifier/dp/B079KG1TN2/ref=sr_1_1?dib=eyJ2IjoiMSJ9.X4BhnwfAoB8irxR1G3RdBqfQz_rhhnTbkTmowzAFuU8yMJ8-FVwrnT2rnO8g5uW6pwSdqNagkOaNuLQvmkHbYD_zvhC8rbqQ5nRJ0h8N7srAj9avD-hSfyxpUHhcDOGT9VVz78fLFgj-sxV_l3kCGD5YtheG21CnaBp7FgYCyvYydnhEF2u2dxtUFOLHghnKqOVP5AOIJqj2qepaljDJ2wPn8SOjpst82J5kV-EZZb0.G5FOAnbMb91vfBV0xSTshe5Y7ZCRxYcie6JTBYwLqP4&dib_tag=se&keywords=1n5819%2Bdiode&qid=1756837101&sr=8-1&th=1) |

## Wiring Diagram
<img width="2480" height="1748" alt="image" src="https://github.com/user-attachments/assets/06722d97-d936-46f0-92c2-cf095e3019eb" />
  * Note that the battery terminals are not standard. I did this because of how the battery fits into the housing, the 6 total terminals (3x +, 3x -) can be replaced with just a battery icon.

## Power Flow
1. Solar Panel charges AA battery during day through diode
2. YX805 keeps LED off during daytime and turns them on at night (solar voltage check)
3. Battery 1.2v boosted through YX805 to LED lights

## Saftey Notes
 - Use a diode between Solar output and YX805 for reverse protection
 - Prefboard design protects battery from over/under charge/voltage
 - Keeps battery at 1.1-1.3v range

## License
MIT

## Author
Caleb Thomas - 2025
