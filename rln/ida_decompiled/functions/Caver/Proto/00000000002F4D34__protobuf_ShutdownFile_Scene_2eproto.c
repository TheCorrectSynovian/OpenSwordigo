/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F4D34
 * Mangled: _ZN5Caver5Proto35protobuf_ShutdownFile_Scene_2eprotoEv
 * Demangled: Caver::Proto::protobuf_ShutdownFile_Scene_2eproto(void)
 *
 * Callers: 1
 *   0x00000000002F6790  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Callees: 1
 *   0x00000000002F6790  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 293
 *   insn=0x00000000002F4D3C string=0x00000000002F4D40 "MG"
 *   insn=0x00000000002F4D48 string=0x00000000002F4D4C ""
 *   insn=0x00000000002F4D4C string=0x00000000002F4D50 ""
 *   insn=0x00000000002F4D58 string=0x00000000002F4D5C "ME"
 *   insn=0x00000000002F4D64 string=0x00000000002F4D68 ""
 *   insn=0x00000000002F4D68 string=0x00000000002F4D6C ""
 *   insn=0x00000000002F4D74 string=0x00000000002F4D78 ""
 *   insn=0x00000000002F4D80 string=0x00000000002F4D84 ""
 *   insn=0x00000000002F4D84 string=0x00000000002F4D88 ""
 *   insn=0x00000000002F4D90 string=0x00000000002F4D94 ""
 *   insn=0x00000000002F4D9C string=0x00000000002F4DA0 ""
 *   insn=0x00000000002F4DA0 string=0x00000000002F4DA4 ""
 *   insn=0x00000000002F4DAC string=0x00000000002F4DB0 "yD"
 *   insn=0x00000000002F4DB8 string=0x00000000002F4DBC ""
 *   insn=0x00000000002F4DBC string=0x00000000002F4DC0 ""
 *   insn=0x00000000002F4DC8 string=0x00000000002F4DCC ""
 *   insn=0x00000000002F4DD4 string=0x00000000002F4DD8 ""
 *   insn=0x00000000002F4DD8 string=0x00000000002F4DDC ""
 *   insn=0x00000000002F4DE4 string=0x00000000002F4DE8 ""
 *   insn=0x00000000002F4DF0 string=0x00000000002F4DF4 ""
 *   insn=0x00000000002F4DF4 string=0x00000000002F4DF8 ""
 *   insn=0x00000000002F4E00 string=0x00000000002F4E04 "y@"
 *   insn=0x00000000002F4E0C string=0x00000000002F4E10 ""
 *   insn=0x00000000002F4E10 string=0x00000000002F4E14 ""
 *   insn=0x00000000002F4E1C string=0x00000000002F4E20 ""
 *   insn=0x00000000002F4E28 string=0x00000000002F4E2C ""
 *   insn=0x00000000002F4E2C string=0x00000000002F4E30 ""
 *   insn=0x00000000002F4E38 string=0x00000000002F4E3C ""
 *   insn=0x00000000002F4E44 string=0x00000000002F4E48 ""
 *   insn=0x00000000002F4E48 string=0x00000000002F4E4C ""
 *   insn=0x00000000002F4E54 string=0x00000000002F4E58 "1A"
 *   insn=0x00000000002F4E60 string=0x00000000002F4E64 ""
 *   insn=0x00000000002F4E64 string=0x00000000002F4E68 ""
 *   insn=0x00000000002F4E70 string=0x00000000002F4E74 ""
 *   insn=0x00000000002F4E7C string=0x00000000002F4E80 ""
 *   insn=0x00000000002F4E80 string=0x00000000002F4E84 ""
 *   insn=0x00000000002F4E8C string=0x00000000002F4E90 ""
 *   insn=0x00000000002F4E98 string=0x00000000002F4E9C ""
 *   insn=0x00000000002F4E9C string=0x00000000002F4EA0 ""
 *   insn=0x00000000002F4EA8 string=0x00000000002F4EAC ""
 *   insn=0x00000000002F4EB4 string=0x00000000002F4EB8 ""
 *   insn=0x00000000002F4EB8 string=0x00000000002F4EBC ""
 *   insn=0x00000000002F4EC4 string=0x00000000002F4EC8 ""
 *   insn=0x00000000002F4ED0 string=0x00000000002F4ED4 ""
 *   insn=0x00000000002F4ED4 string=0x00000000002F4ED8 ""
 *   insn=0x00000000002F4EE0 string=0x00000000002F4EE4 ""
 *   insn=0x00000000002F4EEC string=0x00000000002F4EF0 ""
 *   insn=0x00000000002F4EF0 string=0x00000000002F4EF4 ""
 *   insn=0x00000000002F4EFC string=0x00000000002F4F00 ""
 *   insn=0x00000000002F4F08 string=0x00000000002F4F0C ""
 *   insn=0x00000000002F4F0C string=0x00000000002F4F10 ""
 *   insn=0x00000000002F4F18 string=0x00000000002F4F1C ""
 *   insn=0x00000000002F4F24 string=0x00000000002F4F28 ""
 *   insn=0x00000000002F4F28 string=0x00000000002F4F2C ""
 *   insn=0x00000000002F4F34 string=0x00000000002F4F38 "Y@"
 *   insn=0x00000000002F4F40 string=0x00000000002F4F44 ""
 *   insn=0x00000000002F4F44 string=0x00000000002F4F48 ""
 *   insn=0x00000000002F4F50 string=0x00000000002F4F54 ""
 *   insn=0x00000000002F4F5C string=0x00000000002F4F60 ""
 *   insn=0x00000000002F4F60 string=0x00000000002F4F64 ""
 *   insn=0x00000000002F4F6C string=0x00000000002F4F70 "mD"
 *   insn=0x00000000002F4F78 string=0x00000000002F4F7C ""
 *   insn=0x00000000002F4F7C string=0x00000000002F4F80 ""
 *   insn=0x00000000002F4F88 string=0x00000000002F4F8C ""
 *   insn=0x00000000002F4F94 string=0x00000000002F4F98 ""
 *   insn=0x00000000002F4F98 string=0x00000000002F4F9C ""
 *   insn=0x00000000002F4FA4 string=0x00000000002F4FA8 "eF"
 *   insn=0x00000000002F4FB0 string=0x00000000002F4FB4 ""
 *   insn=0x00000000002F4FB4 string=0x00000000002F4FB8 ""
 *   insn=0x00000000002F4FC0 string=0x00000000002F4FC4 "-A"
 *   insn=0x00000000002F4FCC string=0x00000000002F4FD0 ""
 *   insn=0x00000000002F4FD0 string=0x00000000002F4FD4 ""
 *   insn=0x00000000002F4FDC string=0x00000000002F4FE0 ""
 *   insn=0x00000000002F4FE8 string=0x00000000002F4FEC ""
 *   insn=0x00000000002F4FEC string=0x00000000002F4FF0 ""
 *   insn=0x00000000002F4FF8 string=0x00000000002F4FFC "EF"
 *   insn=0x00000000002F5004 string=0x00000000002F5008 ""
 *   insn=0x00000000002F5008 string=0x00000000002F500C ""
 *   insn=0x00000000002F5014 string=0x00000000002F5018 ""
 *   insn=0x00000000002F5020 string=0x00000000002F5024 ""
 *   insn=0x00000000002F5024 string=0x00000000002F5028 ""
 *   insn=0x00000000002F5030 string=0x00000000002F5034 ""
 *   insn=0x00000000002F503C string=0x00000000002F5040 ""
 *   insn=0x00000000002F5040 string=0x00000000002F5044 ""
 *   insn=0x00000000002F504C string=0x00000000002F5050 "QF"
 *   insn=0x00000000002F5058 string=0x00000000002F505C ""
 *   insn=0x00000000002F5058 string=0x00000000002F5068 "h"
 *   insn=0x00000000002F505C string=0x00000000002F5060 ""
 *   insn=0x00000000002F5068 string=0x00000000002F506C ""
 *   insn=0x00000000002F5074 string=0x00000000002F5078 ""
 *   insn=0x00000000002F5078 string=0x00000000002F507C ""
 *   insn=0x00000000002F5084 string=0x00000000002F5088 ""
 *   insn=0x00000000002F5090 string=0x00000000002F5094 ""
 *   insn=0x00000000002F5090 string=0x00000000002F50A0 "h"
 *   insn=0x00000000002F5094 string=0x00000000002F5098 ""
 *   insn=0x00000000002F50A0 string=0x00000000002F50A4 ""
 *   insn=0x00000000002F50AC string=0x00000000002F50B0 ""
 *   insn=0x00000000002F50B0 string=0x00000000002F50B4 ""
 *   insn=0x00000000002F50BC string=0x00000000002F50C0 ""
 *   insn=0x00000000002F50C8 string=0x00000000002F50CC ""
 *   insn=0x00000000002F50CC string=0x00000000002F50D0 ""
 *   insn=0x00000000002F50D8 string=0x00000000002F50DC "uC"
 *   insn=0x00000000002F50E4 string=0x00000000002F50E8 ""
 *   insn=0x00000000002F50E4 string=0x00000000002F50F4 "h"
 *   insn=0x00000000002F50E8 string=0x00000000002F50EC ""
 *   insn=0x00000000002F50F4 string=0x00000000002F50F8 ""
 *   insn=0x00000000002F5100 string=0x00000000002F5104 ""
 *   insn=0x00000000002F5104 string=0x00000000002F5108 ""
 *   insn=0x00000000002F5110 string=0x00000000002F5114 ""
 *   insn=0x00000000002F511C string=0x00000000002F5120 ""
 *   insn=0x00000000002F5120 string=0x00000000002F5124 ""
 *   insn=0x00000000002F512C string=0x00000000002F5130 ""
 *   insn=0x00000000002F5138 string=0x00000000002F513C ""
 *   insn=0x00000000002F513C string=0x00000000002F5140 ""
 *   insn=0x00000000002F5148 string=0x00000000002F514C ""
 *   insn=0x00000000002F5154 string=0x00000000002F5158 ""
 *   insn=0x00000000002F5154 string=0x00000000002F5164 "h"
 *   insn=0x00000000002F5158 string=0x00000000002F515C ""
 *   insn=0x00000000002F5164 string=0x00000000002F5168 ""
 *   insn=0x00000000002F5170 string=0x00000000002F5174 ""
 *   insn=0x00000000002F5174 string=0x00000000002F5178 ""
 *   insn=0x00000000002F5180 string=0x00000000002F5184 "QF"
 *   insn=0x00000000002F518C string=0x00000000002F5190 ""
 *   insn=0x00000000002F5190 string=0x00000000002F5194 ""
 *   insn=0x00000000002F519C string=0x00000000002F51A0 ""
 *   insn=0x00000000002F51A8 string=0x00000000002F51AC ""
 *   insn=0x00000000002F51A8 string=0x00000000002F51B8 "h"
 *   insn=0x00000000002F51AC string=0x00000000002F51B0 ""
 *   insn=0x00000000002F51B8 string=0x00000000002F51BC ""
 *   insn=0x00000000002F51C4 string=0x00000000002F51C8 ""
 *   insn=0x00000000002F51C8 string=0x00000000002F51CC ""
 *   insn=0x00000000002F51D4 string=0x00000000002F51D8 ""
 *   insn=0x00000000002F51E0 string=0x00000000002F51E4 ""
 *   insn=0x00000000002F51E4 string=0x00000000002F51E8 ""
 *   insn=0x00000000002F51F0 string=0x00000000002F51F4 ""
 *   insn=0x00000000002F51FC string=0x00000000002F5200 ""
 *   insn=0x00000000002F51FC string=0x00000000002F520C "h"
 *   insn=0x00000000002F5200 string=0x00000000002F5204 ""
 *   insn=0x00000000002F520C string=0x00000000002F5210 "yF"
 *   insn=0x00000000002F5218 string=0x00000000002F521C ""
 *   insn=0x00000000002F521C string=0x00000000002F5220 ""
 *   insn=0x00000000002F5228 string=0x00000000002F522C ""
 *   insn=0x00000000002F5234 string=0x00000000002F5238 ""
 *   insn=0x00000000002F5238 string=0x00000000002F523C ""
 *   insn=0x00000000002F5244 string=0x00000000002F5248 ""
 *   insn=0x00000000002F5250 string=0x00000000002F5254 ""
 *   insn=0x00000000002F5254 string=0x00000000002F5258 ""
 *   insn=0x00000000002F5260 string=0x00000000002F5264 ""
 *   insn=0x00000000002F526C string=0x00000000002F5270 ""
 *   insn=0x00000000002F5270 string=0x00000000002F5274 ""
 *   insn=0x00000000002F527C string=0x00000000002F5280 ""
 *   insn=0x00000000002F5288 string=0x00000000002F528C ""
 *   insn=0x00000000002F528C string=0x00000000002F5290 ""
 *   insn=0x00000000002F5298 string=0x00000000002F529C "eC"
 *   insn=0x00000000002F52A4 string=0x00000000002F52A8 ""
 *   insn=0x00000000002F52A8 string=0x00000000002F52AC ""
 *   insn=0x00000000002F52B4 string=0x00000000002F52B8 "}D"
 *   insn=0x00000000002F52C0 string=0x00000000002F52C4 ""
 *   insn=0x00000000002F52C4 string=0x00000000002F52C8 ""
 *   insn=0x00000000002F52D0 string=0x00000000002F52D4 "yD"
 *   insn=0x00000000002F52DC string=0x00000000002F52E0 ""
 *   insn=0x00000000002F52E0 string=0x00000000002F52E4 ""
 *   insn=0x00000000002F52EC string=0x00000000002F52F0 "9G"
 *   insn=0x00000000002F52F8 string=0x00000000002F52FC ""
 *   insn=0x00000000002F52F8 string=0x00000000002F5308 "h"
 *   insn=0x00000000002F52FC string=0x00000000002F5300 ""
 *   insn=0x00000000002F5308 string=0x00000000002F530C "}G"
 *   insn=0x00000000002F5314 string=0x00000000002F5318 ""
 *   insn=0x00000000002F5318 string=0x00000000002F531C ""
 *   insn=0x00000000002F5324 string=0x00000000002F5328 "IE"
 *   insn=0x00000000002F5330 string=0x00000000002F5334 ""
 *   insn=0x00000000002F5334 string=0x00000000002F5338 ""
 *   insn=0x00000000002F5340 string=0x00000000002F5344 ""
 *   insn=0x00000000002F534C string=0x00000000002F5350 ""
 *   insn=0x00000000002F5350 string=0x00000000002F5354 ""
 *   insn=0x00000000002F535C string=0x00000000002F5360 "iE"
 *   insn=0x00000000002F5368 string=0x00000000002F536C ""
 *   insn=0x00000000002F536C string=0x00000000002F5370 ""
 *   insn=0x00000000002F5378 string=0x00000000002F537C "9A"
 *   insn=0x00000000002F5384 string=0x00000000002F5388 ""
 *   insn=0x00000000002F5388 string=0x00000000002F538C ""
 *   insn=0x00000000002F5394 string=0x00000000002F5398 "!E"
 *   insn=0x00000000002F53A0 string=0x00000000002F53A4 ""
 *   insn=0x00000000002F53A4 string=0x00000000002F53A8 ""
 *   insn=0x00000000002F53B0 string=0x00000000002F53B4 ""
 *   insn=0x00000000002F53BC string=0x00000000002F53C0 ""
 *   insn=0x00000000002F53C0 string=0x00000000002F53C4 ""
 *   insn=0x00000000002F53CC string=0x00000000002F53D0 "9@"
 *   insn=0x00000000002F53D8 string=0x00000000002F53DC ""
 *   insn=0x00000000002F53DC string=0x00000000002F53E0 ""
 *   insn=0x00000000002F53E8 string=0x00000000002F53EC ""
 *   insn=0x00000000002F53F4 string=0x00000000002F53F8 ""
 *   insn=0x00000000002F53F4 string=0x00000000002F5404 "h"
 *   insn=0x00000000002F53F8 string=0x00000000002F53FC ""
 *   insn=0x00000000002F5404 string=0x00000000002F5408 ")D"
 *   insn=0x00000000002F5410 string=0x00000000002F5414 ""
 *   insn=0x00000000002F5414 string=0x00000000002F5418 ""
 *   insn=0x00000000002F5420 string=0x00000000002F5424 "iD"
 *   insn=0x00000000002F542C string=0x00000000002F5430 ""
 *   insn=0x00000000002F5430 string=0x00000000002F5434 ""
 *   insn=0x00000000002F543C string=0x00000000002F5440 ""
 *   insn=0x00000000002F5448 string=0x00000000002F544C ""
 *   insn=0x00000000002F5448 string=0x00000000002F5458 "h"
 *   insn=0x00000000002F544C string=0x00000000002F5450 ""
 *   insn=0x00000000002F5458 string=0x00000000002F545C ""
 *   insn=0x00000000002F5464 string=0x00000000002F5468 ""
 *   insn=0x00000000002F5468 string=0x00000000002F546C ""
 *   insn=0x00000000002F5474 string=0x00000000002F5478 "mG"
 *   insn=0x00000000002F5480 string=0x00000000002F5484 ""
 *   insn=0x00000000002F5484 string=0x00000000002F5488 ""
 *   insn=0x00000000002F5490 string=0x00000000002F5494 ""
 *   insn=0x00000000002F549C string=0x00000000002F54A0 ""
 *   insn=0x00000000002F54A0 string=0x00000000002F54A4 ""
 *   insn=0x00000000002F54AC string=0x00000000002F54B0 "MC"
 *   insn=0x00000000002F54B8 string=0x00000000002F54BC ""
 *   insn=0x00000000002F54BC string=0x00000000002F54C0 ""
 *   insn=0x00000000002F54C8 string=0x00000000002F54CC ""
 *   insn=0x00000000002F54D4 string=0x00000000002F54D8 ""
 *   insn=0x00000000002F54D8 string=0x00000000002F54DC ""
 *   insn=0x00000000002F54E4 string=0x00000000002F54E8 "uG"
 *   insn=0x00000000002F54F0 string=0x00000000002F54F4 ""
 *   insn=0x00000000002F54F4 string=0x00000000002F54F8 ""
 *   insn=0x00000000002F5500 string=0x00000000002F5504 "%@"
 *   insn=0x00000000002F550C string=0x00000000002F5510 ""
 *   insn=0x00000000002F5510 string=0x00000000002F5514 ""
 *   insn=0x00000000002F551C string=0x00000000002F5520 ""
 *   insn=0x00000000002F5528 string=0x00000000002F552C ""
 *   insn=0x00000000002F552C string=0x00000000002F5530 ""
 *   insn=0x00000000002F5538 string=0x00000000002F553C ""
 *   insn=0x00000000002F5544 string=0x00000000002F5548 ""
 *   insn=0x00000000002F5548 string=0x00000000002F554C ""
 *   insn=0x00000000002F5554 string=0x00000000002F5558 ""
 *   insn=0x00000000002F5560 string=0x00000000002F5564 ""
 *   insn=0x00000000002F5564 string=0x00000000002F5568 ""
 *   insn=0x00000000002F5570 string=0x00000000002F5574 ""
 *   insn=0x00000000002F557C string=0x00000000002F5580 ""
 *   insn=0x00000000002F5580 string=0x00000000002F5584 ""
 *   insn=0x00000000002F558C string=0x00000000002F5590 ""
 *   insn=0x00000000002F5598 string=0x00000000002F559C ""
 *   insn=0x00000000002F559C string=0x00000000002F55A0 ""
 *   insn=0x00000000002F55A8 string=0x00000000002F55AC ""
 *   insn=0x00000000002F55B4 string=0x00000000002F55B8 ""
 *   insn=0x00000000002F55B4 string=0x00000000002F55C4 "h"
 *   insn=0x00000000002F55B8 string=0x00000000002F55BC ""
 *   insn=0x00000000002F55C4 string=0x00000000002F55C8 ""
 *   insn=0x00000000002F55D0 string=0x00000000002F55D4 ""
 *   insn=0x00000000002F55D4 string=0x00000000002F55D8 ""
 *   insn=0x00000000002F55E0 string=0x00000000002F55E4 "G"
 *   insn=0x00000000002F55EC string=0x00000000002F55F0 ""
 *   insn=0x00000000002F55F0 string=0x00000000002F55F4 ""
 *   insn=0x00000000002F55FC string=0x00000000002F5600 ""
 *   insn=0x00000000002F5608 string=0x00000000002F560C ""
 *   insn=0x00000000002F560C string=0x00000000002F5610 ""
 *   insn=0x00000000002F5618 string=0x00000000002F561C ""
 *   insn=0x00000000002F5624 string=0x00000000002F5628 ""
 *   insn=0x00000000002F5628 string=0x00000000002F562C ""
 *   insn=0x00000000002F5634 string=0x00000000002F5638 ""
 *   insn=0x00000000002F5640 string=0x00000000002F5644 ""
 *   insn=0x00000000002F5644 string=0x00000000002F5648 ""
 *   insn=0x00000000002F5650 string=0x00000000002F5654 ""
 *   insn=0x00000000002F565C string=0x00000000002F5660 ""
 *   insn=0x00000000002F5660 string=0x00000000002F5664 ""
 *   insn=0x00000000002F566C string=0x00000000002F5670 ""
 *   insn=0x00000000002F5678 string=0x00000000002F567C ""
 *   insn=0x00000000002F567C string=0x00000000002F5680 ""
 *   insn=0x00000000002F5688 string=0x00000000002F568C ""
 *   insn=0x00000000002F5694 string=0x00000000002F5698 ""
 *   insn=0x00000000002F5698 string=0x00000000002F569C ""
 *   insn=0x00000000002F56A4 string=0x00000000002F56A8 "]C"
 *   insn=0x00000000002F56B0 string=0x00000000002F56B4 ""
 *   insn=0x00000000002F56B4 string=0x00000000002F56B8 ""
 *   insn=0x00000000002F56C0 string=0x00000000002F56C4 ""
 *   insn=0x00000000002F56CC string=0x00000000002F56D0 ""
 *   insn=0x00000000002F56D0 string=0x00000000002F56D4 ""
 *   insn=0x00000000002F56DC string=0x00000000002F56E0 "\tC"
 *   insn=0x00000000002F56E8 string=0x00000000002F56EC ""
 *   insn=0x00000000002F56EC string=0x00000000002F56F0 ""
 *   insn=0x00000000002F56F8 string=0x00000000002F56FC ""
 *   insn=0x00000000002F5704 string=0x00000000002F5708 ""
 *   insn=0x00000000002F5708 string=0x00000000002F570C ""
 *   insn=0x00000000002F5714 string=0x00000000002F5718 ""
 *   insn=0x00000000002F5720 string=0x00000000002F5724 ""
 *   insn=0x00000000002F5724 string=0x00000000002F5728 ""
 *   insn=0x00000000002F5730 string=0x00000000002F5734 "qC"
 *   insn=0x00000000002F573C string=0x00000000002F5740 ""
 *   insn=0x00000000002F5740 string=0x00000000002F5744 ""
 *   insn=0x00000000002F574C string=0x00000000002F5750 ""
 *   insn=0x00000000002F5758 string=0x00000000002F575C ""
 *   insn=0x00000000002F575C string=0x00000000002F5760 ""
 *   insn=0x00000000002F5768 string=0x00000000002F576C ""
 *   insn=0x00000000002F5774 string=0x00000000002F5778 ""
 *   insn=0x00000000002F5780 string=0x00000000002F5784 " "
 *   insn=0x00000000002F5794 string=0x00000000002F5798 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::protobuf_ShutdownFile_Scene_2eproto(Caver::Proto *this)
{
  __int64 result; // x0

  if ( Caver::Proto::Component::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::Component::default_instance_ + 8LL))(Caver::Proto::Component::default_instance_);
  if ( Caver::Proto::ObjectTemplate::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::ObjectTemplate::default_instance_ + 8LL))(Caver::Proto::ObjectTemplate::default_instance_);
  if ( Caver::Proto::ObjectLibrary::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::ObjectLibrary::default_instance_ + 8LL))(Caver::Proto::ObjectLibrary::default_instance_);
  if ( Caver::Proto::SceneObject::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::SceneObject::default_instance_ + 8LL))(Caver::Proto::SceneObject::default_instance_);
  if ( Caver::Proto::SceneObjectGroup::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::SceneObjectGroup::default_instance_ + 8LL))(Caver::Proto::SceneObjectGroup::default_instance_);
  if ( Caver::Proto::Scene::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::Scene::default_instance_ + 8LL))(Caver::Proto::Scene::default_instance_);
  if ( Caver::Proto::SpriteComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::SpriteComponent::default_instance_ + 8LL))(Caver::Proto::SpriteComponent::default_instance_);
  if ( Caver::Proto::ModelComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::ModelComponent::default_instance_ + 8LL))(Caver::Proto::ModelComponent::default_instance_);
  if ( Caver::Proto::KeyframeAnimationComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::KeyframeAnimationComponent::default_instance_ + 8LL))(Caver::Proto::KeyframeAnimationComponent::default_instance_);
  if ( Caver::Proto::BlendAnimationComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::BlendAnimationComponent::default_instance_ + 8LL))(Caver::Proto::BlendAnimationComponent::default_instance_);
  if ( Caver::Proto::ModelTransformControllerComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::ModelTransformControllerComponent::default_instance_ + 8LL))(Caver::Proto::ModelTransformControllerComponent::default_instance_);
  if ( Caver::Proto::GroundPolygonComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::GroundPolygonComponent::default_instance_ + 8LL))(Caver::Proto::GroundPolygonComponent::default_instance_);
  if ( Caver::Proto::GroundMeshComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::GroundMeshComponent::default_instance_ + 8LL))(Caver::Proto::GroundMeshComponent::default_instance_);
  if ( Caver::Proto::GroundMeshGeneratorComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::GroundMeshGeneratorComponent::default_instance_ + 8LL))(Caver::Proto::GroundMeshGeneratorComponent::default_instance_);
  if ( Caver::Proto::TextureMappingComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::TextureMappingComponent::default_instance_ + 8LL))(Caver::Proto::TextureMappingComponent::default_instance_);
  if ( Caver::Proto::WaterMeshComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::WaterMeshComponent::default_instance_ + 8LL))(Caver::Proto::WaterMeshComponent::default_instance_);
  if ( Caver::Proto::ShapeComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::ShapeComponent::default_instance_ + 8LL))(Caver::Proto::ShapeComponent::default_instance_);
  if ( Caver::Proto::CollisionShapeComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::CollisionShapeComponent::default_instance_ + 8LL))(Caver::Proto::CollisionShapeComponent::default_instance_);
  if ( Caver::Proto::DamageComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::DamageComponent::default_instance_ + 8LL))(Caver::Proto::DamageComponent::default_instance_);
  if ( Caver::Proto::HealthComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::HealthComponent::default_instance_ + 8LL))(Caver::Proto::HealthComponent::default_instance_);
  if ( Caver::Proto::BoneControlledCollisionShapeComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::BoneControlledCollisionShapeComponent::default_instance_
                                    + 8LL))(Caver::Proto::BoneControlledCollisionShapeComponent::default_instance_);
  if ( Caver::Proto::ObjectLinkControllerComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::ObjectLinkControllerComponent::default_instance_ + 8LL))(Caver::Proto::ObjectLinkControllerComponent::default_instance_);
  if ( Caver::Proto::LightComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::LightComponent::default_instance_ + 8LL))(Caver::Proto::LightComponent::default_instance_);
  if ( Caver::Proto::ShadowComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::ShadowComponent::default_instance_ + 8LL))(Caver::Proto::ShadowComponent::default_instance_);
  if ( Caver::Proto::SoundEffectComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::SoundEffectComponent::default_instance_ + 8LL))(Caver::Proto::SoundEffectComponent::default_instance_);
  if ( Caver::Proto::AnimationControllerComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::AnimationControllerComponent::default_instance_ + 8LL))(Caver::Proto::AnimationControllerComponent::default_instance_);
  if ( Caver::Proto::CharAnimControllerComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::CharAnimControllerComponent::default_instance_ + 8LL))(Caver::Proto::CharAnimControllerComponent::default_instance_);
  if ( Caver::Proto::CharControllerComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::CharControllerComponent::default_instance_ + 8LL))(Caver::Proto::CharControllerComponent::default_instance_);
  if ( Caver::Proto::EntityComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::EntityComponent::default_instance_ + 8LL))(Caver::Proto::EntityComponent::default_instance_);
  if ( Caver::Proto::BushControllerComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::BushControllerComponent::default_instance_ + 8LL))(Caver::Proto::BushControllerComponent::default_instance_);
  if ( Caver::Proto::ElevatorControllerComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::ElevatorControllerComponent::default_instance_ + 8LL))(Caver::Proto::ElevatorControllerComponent::default_instance_);
  if ( Caver::Proto::PressureTriggerComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::PressureTriggerComponent::default_instance_ + 8LL))(Caver::Proto::PressureTriggerComponent::default_instance_);
  if ( Caver::Proto::DoorControllerComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::DoorControllerComponent::default_instance_ + 8LL))(Caver::Proto::DoorControllerComponent::default_instance_);
  if ( Caver::Proto::ProgramComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::ProgramComponent::default_instance_ + 8LL))(Caver::Proto::ProgramComponent::default_instance_);
  if ( Caver::Proto::MonsterEntityComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::MonsterEntityComponent::default_instance_ + 8LL))(Caver::Proto::MonsterEntityComponent::default_instance_);
  if ( Caver::Proto::PhysicsObjectComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::PhysicsObjectComponent::default_instance_ + 8LL))(Caver::Proto::PhysicsObjectComponent::default_instance_);
  if ( Caver::Proto::BreakableObjectComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::BreakableObjectComponent::default_instance_ + 8LL))(Caver::Proto::BreakableObjectComponent::default_instance_);
  if ( Caver::Proto::EntityControllerComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::EntityControllerComponent::default_instance_ + 8LL))(Caver::Proto::EntityControllerComponent::default_instance_);
  if ( Caver::Proto::EntityActionComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::EntityActionComponent::default_instance_ + 8LL))(Caver::Proto::EntityActionComponent::default_instance_);
  if ( Caver::Proto::PhysicsPlatformComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::PhysicsPlatformComponent::default_instance_ + 8LL))(Caver::Proto::PhysicsPlatformComponent::default_instance_);
  if ( Caver::Proto::EntityInfoComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::EntityInfoComponent::default_instance_ + 8LL))(Caver::Proto::EntityInfoComponent::default_instance_);
  if ( Caver::Proto::HeroEntityComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::HeroEntityComponent::default_instance_ + 8LL))(Caver::Proto::HeroEntityComponent::default_instance_);
  if ( Caver::Proto::BackgroundComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::BackgroundComponent::default_instance_ + 8LL))(Caver::Proto::BackgroundComponent::default_instance_);
  if ( Caver::Proto::PropertiesComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::PropertiesComponent::default_instance_ + 8LL))(Caver::Proto::PropertiesComponent::default_instance_);
  if ( Caver::Proto::ParticleEmitter::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::ParticleEmitter::default_instance_ + 8LL))(Caver::Proto::ParticleEmitter::default_instance_);
  if ( Caver::Proto::ParticleEmitterComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::ParticleEmitterComponent::default_instance_ + 8LL))(Caver::Proto::ParticleEmitterComponent::default_instance_);
  if ( Caver::Proto::ParticleComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::ParticleComponent::default_instance_ + 8LL))(Caver::Proto::ParticleComponent::default_instance_);
  if ( Caver::Proto::FireEmitterComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::FireEmitterComponent::default_instance_ + 8LL))(Caver::Proto::FireEmitterComponent::default_instance_);
  if ( Caver::Proto::SimpleGlowComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::SimpleGlowComponent::default_instance_ + 8LL))(Caver::Proto::SimpleGlowComponent::default_instance_);
  if ( Caver::Proto::ParticleObjectComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::ParticleObjectComponent::default_instance_ + 8LL))(Caver::Proto::ParticleObjectComponent::default_instance_);
  if ( Caver::Proto::OrbitControllerComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::OrbitControllerComponent::default_instance_ + 8LL))(Caver::Proto::OrbitControllerComponent::default_instance_);
  if ( Caver::Proto::ParticleFieldComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::ParticleFieldComponent::default_instance_ + 8LL))(Caver::Proto::ParticleFieldComponent::default_instance_);
  if ( Caver::Proto::MonsterControllerComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::MonsterControllerComponent::default_instance_ + 8LL))(Caver::Proto::MonsterControllerComponent::default_instance_);
  if ( Caver::Proto::WalkingMonsterControllerComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::WalkingMonsterControllerComponent::default_instance_ + 8LL))(Caver::Proto::WalkingMonsterControllerComponent::default_instance_);
  if ( Caver::Proto::ChargingMonsterControllerComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::ChargingMonsterControllerComponent::default_instance_
                                    + 8LL))(Caver::Proto::ChargingMonsterControllerComponent::default_instance_);
  if ( Caver::Proto::SnappingMonsterControllerComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::SnappingMonsterControllerComponent::default_instance_
                                    + 8LL))(Caver::Proto::SnappingMonsterControllerComponent::default_instance_);
  if ( Caver::Proto::AttackComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::AttackComponent::default_instance_ + 8LL))(Caver::Proto::AttackComponent::default_instance_);
  if ( Caver::Proto::LeapingMonsterControllerComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::LeapingMonsterControllerComponent::default_instance_ + 8LL))(Caver::Proto::LeapingMonsterControllerComponent::default_instance_);
  if ( Caver::Proto::SkellyMonsterControllerComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::SkellyMonsterControllerComponent::default_instance_ + 8LL))(Caver::Proto::SkellyMonsterControllerComponent::default_instance_);
  if ( Caver::Proto::StaticMonsterControllerComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::StaticMonsterControllerComponent::default_instance_ + 8LL))(Caver::Proto::StaticMonsterControllerComponent::default_instance_);
  if ( Caver::Proto::ShootingMonsterControllerComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::ShootingMonsterControllerComponent::default_instance_
                                    + 8LL))(Caver::Proto::ShootingMonsterControllerComponent::default_instance_);
  if ( Caver::Proto::BatMonsterControllerComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::BatMonsterControllerComponent::default_instance_ + 8LL))(Caver::Proto::BatMonsterControllerComponent::default_instance_);
  if ( Caver::Proto::BouncingMonsterControllerComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::BouncingMonsterControllerComponent::default_instance_
                                    + 8LL))(Caver::Proto::BouncingMonsterControllerComponent::default_instance_);
  if ( Caver::Proto::MonsterDeathControllerComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::MonsterDeathControllerComponent::default_instance_ + 8LL))(Caver::Proto::MonsterDeathControllerComponent::default_instance_);
  if ( Caver::Proto::GenericMonsterControllerComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::GenericMonsterControllerComponent::default_instance_ + 8LL))(Caver::Proto::GenericMonsterControllerComponent::default_instance_);
  if ( Caver::Proto::SwingableWeaponComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::SwingableWeaponComponent::default_instance_ + 8LL))(Caver::Proto::SwingableWeaponComponent::default_instance_);
  if ( Caver::Proto::SwingableWeaponControllerComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::SwingableWeaponControllerComponent::default_instance_
                                    + 8LL))(Caver::Proto::SwingableWeaponControllerComponent::default_instance_);
  if ( Caver::Proto::SwingComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::SwingComponent::default_instance_ + 8LL))(Caver::Proto::SwingComponent::default_instance_);
  if ( Caver::Proto::WeaponGlowComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::WeaponGlowComponent::default_instance_ + 8LL))(Caver::Proto::WeaponGlowComponent::default_instance_);
  if ( Caver::Proto::WeaponTrailComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::WeaponTrailComponent::default_instance_ + 8LL))(Caver::Proto::WeaponTrailComponent::default_instance_);
  if ( Caver::Proto::PortalComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::PortalComponent::default_instance_ + 8LL))(Caver::Proto::PortalComponent::default_instance_);
  if ( Caver::Proto::SpawnPointComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::SpawnPointComponent::default_instance_ + 8LL))(Caver::Proto::SpawnPointComponent::default_instance_);
  if ( Caver::Proto::CollectableItemComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::CollectableItemComponent::default_instance_ + 8LL))(Caver::Proto::CollectableItemComponent::default_instance_);
  if ( Caver::Proto::TouchableComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::TouchableComponent::default_instance_ + 8LL))(Caver::Proto::TouchableComponent::default_instance_);
  if ( Caver::Proto::ItemDropComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::ItemDropComponent::default_instance_ + 8LL))(Caver::Proto::ItemDropComponent::default_instance_);
  if ( Caver::Proto::ItemDropComponent_ItemDropEntry::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::ItemDropComponent_ItemDropEntry::default_instance_ + 8LL))(Caver::Proto::ItemDropComponent_ItemDropEntry::default_instance_);
  if ( Caver::Proto::OverlayTextComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::OverlayTextComponent::default_instance_ + 8LL))(Caver::Proto::OverlayTextComponent::default_instance_);
  if ( Caver::Proto::PortalEffectComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::PortalEffectComponent::default_instance_ + 8LL))(Caver::Proto::PortalEffectComponent::default_instance_);
  if ( Caver::Proto::MagicBoltComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::MagicBoltComponent::default_instance_ + 8LL))(Caver::Proto::MagicBoltComponent::default_instance_);
  if ( Caver::Proto::MagicExplosionComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::MagicExplosionComponent::default_instance_ + 8LL))(Caver::Proto::MagicExplosionComponent::default_instance_);
  if ( Caver::Proto::SkillComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::SkillComponent::default_instance_ + 8LL))(Caver::Proto::SkillComponent::default_instance_);
  if ( Caver::Proto::MagicSpellCastComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::MagicSpellCastComponent::default_instance_ + 8LL))(Caver::Proto::MagicSpellCastComponent::default_instance_);
  if ( Caver::Proto::FireBreathComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::FireBreathComponent::default_instance_ + 8LL))(Caver::Proto::FireBreathComponent::default_instance_);
  if ( Caver::Proto::ProjectileControllerComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::ProjectileControllerComponent::default_instance_ + 8LL))(Caver::Proto::ProjectileControllerComponent::default_instance_);
  if ( Caver::Proto::MagicBombComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::MagicBombComponent::default_instance_ + 8LL))(Caver::Proto::MagicBombComponent::default_instance_);
  if ( Caver::Proto::MagicHookshotComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::MagicHookshotComponent::default_instance_ + 8LL))(Caver::Proto::MagicHookshotComponent::default_instance_);
  if ( Caver::Proto::SpellComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::SpellComponent::default_instance_ + 8LL))(Caver::Proto::SpellComponent::default_instance_);
  if ( Caver::Proto::DimensionObjectComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::DimensionObjectComponent::default_instance_ + 8LL))(Caver::Proto::DimensionObjectComponent::default_instance_);
  if ( Caver::Proto::DimensionSpellComponent::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::DimensionSpellComponent::default_instance_ + 8LL))(Caver::Proto::DimensionSpellComponent::default_instance_);
  if ( Caver::Proto::MeshData::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::MeshData::default_instance_ + 8LL))(Caver::Proto::MeshData::default_instance_);
  if ( Caver::Proto::MeshMaterial::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::MeshMaterial::default_instance_ + 8LL))(Caver::Proto::MeshMaterial::default_instance_);
  if ( Caver::Proto::Mesh::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::Mesh::default_instance_ + 8LL))(Caver::Proto::Mesh::default_instance_);
  if ( Caver::Proto::PackedMesh::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::PackedMesh::default_instance_ + 8LL))(Caver::Proto::PackedMesh::default_instance_);
  result = Caver::Proto::UnpackedMesh::default_instance_;
  if ( Caver::Proto::UnpackedMesh::default_instance_ )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::UnpackedMesh::default_instance_ + 8LL))(Caver::Proto::UnpackedMesh::default_instance_);
  return result;
}

