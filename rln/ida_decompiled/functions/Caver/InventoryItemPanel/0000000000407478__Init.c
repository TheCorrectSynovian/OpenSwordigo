/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000407478
 * Mangled: _ZN5Caver18InventoryItemPanel4InitERKN5boost10shared_ptrINS_9GameStateEEE
 * Demangled: Caver::InventoryItemPanel::Init(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callers: 1
 *   0x00000000001FB990  Caver::InventoryItemPanel::Init(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 27
 *   0x00000000001F3C90  Caver::Rectangle::RectangleByOutsetting(float)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5660  Caver::MenuItemSlot::Init(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6360  Caver::GUITexturedRect::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&,bool)
 *   0x00000000001F6670  Caver::InventoryItemPanel::UpdateLabels(void)
 *   0x00000000001F6C10  boost::shared_ptr<Caver::MenuItemSlot>::shared_ptr<Caver::MenuItemSlot>(Caver::MenuItemSlot *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7330  boost::detail::shared_count::shared_count<Caver::GUITexturedRect>(Caver::GUITexturedRect *)
 *   0x00000000001F8CE0  Caver::GameInterfaceBuilder::NormalLabel(std::string const&,Caver::Color,Caver::Color)
 *   0x00000000001F95E0  Caver::GUITexturedRect::CreateWithBounds(Caver::Rectangle const&,bool)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FA370  boost::shared_ptr<Caver::InventoryTrinketSlot>::shared_ptr<Caver::InventoryTrinketSlot>(Caver::InventoryTrinketSlot *)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FB580  Caver::MenuItemSlot::MenuItemSlot(void)
 *   0x00000000001FB630  Caver::InventoryTrinketSlot::InventoryTrinketSlot(void)
 *   0x00000000001FC9D0  Caver::GameInterfaceBuilder::SmallLabel(std::string const&,Caver::Color,Caver::Color)
 *   0x00000000001FD850  Caver::GUITexturedRect::GUITexturedRect(void)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x00000000002026B0  Caver::InventoryTrinketSlot::Init(boost::shared_ptr<Caver::GameState> const&,float)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004081C8  Caver::InventoryItemPanel::UpdateLabels(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 342
 *   insn=0x0000000000407490 string=0x0000000000407494 "V"
 *   insn=0x00000000004074A0 string=0x00000000004074A4 ") @"
 *   insn=0x00000000004074A8 string=0x00000000004074AC "\n"
 *   insn=0x00000000004074A8 string=0x00000000004074B8 "t"
 *   insn=0x00000000004074AC string=0x00000000004074B0 "J"
 *   insn=0x00000000004074B0 string=0x00000000004074B4 "\n"
 *   insn=0x00000000004074B8 string=0x00000000004074BC "i""
 *   insn=0x00000000004074BC string=0x00000000004074C0 "4"
 *   insn=0x00000000004074C4 string=0x00000000004074C8 ""
 *   insn=0x00000000004074D8 string=0x00000000004074DC "\t@"
 *   insn=0x00000000004074E4 string=0x00000000004074E8 ""
 *   insn=0x00000000004074F8 string=0x00000000004074FC "@"
 *   insn=0x0000000000407504 string=0x0000000000407508 "6"
 *   insn=0x0000000000407508 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000407510 string=0x00000000001FD850 "0'"
 *   insn=0x0000000000407524 string=0x00000000001F7330 "0'"
 *   insn=0x0000000000407530 string=0x0000000000407534 ""
 *   insn=0x0000000000407534 string=0x0000000000407538 "hRQ"
 *   insn=0x0000000000407544 string=0x0000000000407548 "i""
 *   insn=0x000000000040754C string=0x0000000000407550 "4"
 *   insn=0x0000000000407550 string=0x0000000000407594 "t"
 *   insn=0x0000000000407554 string=0x0000000000407558 ""
 *   insn=0x0000000000407568 string=0x000000000040756C "\t@"
 *   insn=0x0000000000407574 string=0x0000000000407578 ""
 *   insn=0x0000000000407588 string=0x000000000040758C "@"
 *   insn=0x0000000000407594 string=0x0000000000407598 "n"
 *   insn=0x0000000000407598 string=0x00000000001FA350 "0'"
 *   insn=0x000000000040759C string=0x00000000004075A0 "a"
 *   insn=0x00000000004075A0 string=0x0000000000593EC0 "ui_inventory_panel"
 *   insn=0x00000000004075D8 string=0x00000000004075DC "a"
 *   insn=0x00000000004075DC string=0x00000000001F6360 "0'"
 *   insn=0x00000000004075E4 string=0x00000000004075E8 "@"
 *   insn=0x00000000004075E8 string=0x00000000004075EC ""
 *   insn=0x00000000004075EC string=0x00000000004075F0 ""
 *   insn=0x00000000004075F4 string=0x00000000004075F8 ""
 *   insn=0x00000000004075F8 string=0x00000000004075FC ""
 *   insn=0x0000000000407614 string=0x0000000000407618 "A<"
 *   insn=0x0000000000407628 string=0x00000000001FB580 "0'"
 *   insn=0x0000000000407630 string=0x0000000000407634 "w"
 *   insn=0x0000000000407634 string=0x0000000000407638 "hRR"
 *   insn=0x0000000000407634 string=0x00000000001F6C10 "0'"
 *   insn=0x0000000000407644 string=0x0000000000407648 "i""
 *   insn=0x000000000040764C string=0x0000000000407650 "4"
 *   insn=0x0000000000407650 string=0x0000000000407694 "`"
 *   insn=0x0000000000407654 string=0x0000000000407658 ""
 *   insn=0x0000000000407668 string=0x000000000040766C "\t@"
 *   insn=0x0000000000407674 string=0x0000000000407678 ""
 *   insn=0x0000000000407688 string=0x000000000040768C "@"
 *   insn=0x000000000040769C string=0x00000000004076A0 "i"
 *   insn=0x000000000040769C string=0x00000000001F5660 "P'"
 *   insn=0x00000000004076A0 string=0x00000000004076A4 "?"
 *   insn=0x00000000004076A4 string=0x00000000004076A8 "h"
 *   insn=0x00000000004076A8 string=0x00000000004076AC "1@"
 *   insn=0x00000000004076B0 string=0x00000000004076B4 "i"
 *   insn=0x00000000004076BC string=0x00000000004076C0 "*"
 *   insn=0x00000000004076C0 string=0x00000000004076C4 "J"
 *   insn=0x00000000004076C4 string=0x00000000004076C8 "*"
 *   insn=0x00000000004076D8 string=0x00000000004076DC "4"
 *   insn=0x00000000004076E0 string=0x00000000004076E4 ""
 *   insn=0x00000000004076F4 string=0x00000000004076F8 "\t@"
 *   insn=0x0000000000407700 string=0x0000000000407704 ""
 *   insn=0x0000000000407714 string=0x0000000000407718 "@"
 *   insn=0x000000000040772C string=0x00000000001FB630 "0'"
 *   insn=0x0000000000407734 string=0x0000000000407738 "t"
 *   insn=0x0000000000407738 string=0x000000000040773C ""
 *   insn=0x000000000040773C string=0x0000000000407740 "hVS"
 *   insn=0x000000000040773C string=0x00000000001FA370 "0'"
 *   insn=0x000000000040774C string=0x0000000000407750 "i""
 *   insn=0x0000000000407754 string=0x0000000000407758 "5"
 *   insn=0x0000000000407758 string=0x000000000040779C "`"
 *   insn=0x000000000040775C string=0x0000000000407760 ""
 *   insn=0x0000000000407770 string=0x0000000000407774 "\t@"
 *   insn=0x000000000040777C string=0x0000000000407780 ""
 *   insn=0x0000000000407790 string=0x0000000000407794 "@"
 *   insn=0x000000000040779C string=0x00000000004077A0 "h"
 *   insn=0x00000000004077A4 string=0x00000000004077A8 "|"
 *   insn=0x00000000004077B4 string=0x00000000004077B8 "h"
 *   insn=0x00000000004077B8 string=0x00000000004077BC "i"
 *   insn=0x00000000004077BC string=0x00000000004077C0 "1@"
 *   insn=0x00000000004077C4 string=0x00000000004077C8 "i"
 *   insn=0x00000000004077D0 string=0x00000000004077D4 "*"
 *   insn=0x00000000004077D4 string=0x00000000004077D8 "J"
 *   insn=0x00000000004077D8 string=0x00000000004077DC "*"
 *   insn=0x00000000004077EC string=0x00000000004077F0 "4"
 *   insn=0x00000000004077F0 string=0x0000000000407834 "A"
 *   insn=0x00000000004077F4 string=0x00000000004077F8 ""
 *   insn=0x0000000000407808 string=0x000000000040780C "\t@"
 *   insn=0x0000000000407814 string=0x0000000000407818 ""
 *   insn=0x0000000000407828 string=0x000000000040782C "@"
 *   insn=0x0000000000407844 string=0x0000000000407848 ""
 *   insn=0x0000000000407864 string=0x00000000001F8CE0 "0'"
 *   insn=0x000000000040786C string=0x0000000000407870 "\n"
 *   insn=0x000000000040786C string=0x000000000040787C "t"
 *   insn=0x0000000000407870 string=0x0000000000407874 "J"
 *   insn=0x0000000000407874 string=0x0000000000407878 "\n"
 *   insn=0x000000000040787C string=0x0000000000407880 "i""
 *   insn=0x0000000000407880 string=0x0000000000407884 "4"
 *   insn=0x0000000000407888 string=0x000000000040788C ""
 *   insn=0x0000000000407898 string=0x000000000040789C "\t@"
 *   insn=0x00000000004078A8 string=0x00000000004078AC ""
 *   insn=0x00000000004078B8 string=0x00000000004078BC "@"
 *   insn=0x00000000004078C8 string=0x00000000004078CC "4"
 *   insn=0x00000000004078D0 string=0x00000000004078D4 ""
 *   insn=0x00000000004078E0 string=0x00000000004078E4 "\t@"
 *   insn=0x00000000004078F0 string=0x00000000004078F4 ""
 *   insn=0x0000000000407900 string=0x0000000000407904 "@"
 *   insn=0x0000000000407918 string=0x000000000040791C "A%"
 *   insn=0x000000000040791C string=0x0000000000407920 "h"
 *   insn=0x0000000000407920 string=0x0000000000407924 "i"
 *   insn=0x0000000000407924 string=0x0000000000407928 "1@"
 *   insn=0x000000000040792C string=0x0000000000407930 "i"
 *   insn=0x0000000000407938 string=0x000000000040793C "*"
 *   insn=0x000000000040793C string=0x0000000000407940 "J"
 *   insn=0x0000000000407940 string=0x0000000000407944 "*"
 *   insn=0x0000000000407954 string=0x0000000000407958 "4"
 *   insn=0x0000000000407958 string=0x000000000040799C "A"
 *   insn=0x000000000040795C string=0x0000000000407960 ""
 *   insn=0x0000000000407970 string=0x0000000000407974 "\t@"
 *   insn=0x000000000040797C string=0x0000000000407980 ""
 *   insn=0x0000000000407990 string=0x0000000000407994 "@"
 *   insn=0x00000000004079AC string=0x00000000004079B0 ""
 *   insn=0x00000000004079CC string=0x00000000001FC9D0 "0'"
 *   insn=0x00000000004079D4 string=0x00000000004079D8 "\n"
 *   insn=0x00000000004079D4 string=0x00000000004079E4 "t"
 *   insn=0x00000000004079D8 string=0x00000000004079DC "J"
 *   insn=0x00000000004079DC string=0x00000000004079E0 "\n"
 *   insn=0x00000000004079E4 string=0x00000000004079E8 "i""
 *   insn=0x00000000004079E8 string=0x00000000004079EC "4"
 *   insn=0x00000000004079F0 string=0x00000000004079F4 ""
 *   insn=0x0000000000407A00 string=0x0000000000407A04 "\t@"
 *   insn=0x0000000000407A10 string=0x0000000000407A14 ""
 *   insn=0x0000000000407A20 string=0x0000000000407A24 "@"
 *   insn=0x0000000000407A30 string=0x0000000000407A34 "4"
 *   insn=0x0000000000407A38 string=0x0000000000407A3C ""
 *   insn=0x0000000000407A48 string=0x0000000000407A4C "\t@"
 *   insn=0x0000000000407A58 string=0x0000000000407A5C ""
 *   insn=0x0000000000407A68 string=0x0000000000407A6C "@"
 *   insn=0x0000000000407A80 string=0x0000000000407A84 "!"
 *   insn=0x0000000000407A84 string=0x0000000000407A88 "h"
 *   insn=0x0000000000407A88 string=0x0000000000407A8C "i"
 *   insn=0x0000000000407A8C string=0x0000000000407A90 "1@"
 *   insn=0x0000000000407A94 string=0x0000000000407A98 "i"
 *   insn=0x0000000000407AA0 string=0x0000000000407AA4 "*"
 *   insn=0x0000000000407AA4 string=0x0000000000407AA8 "J"
 *   insn=0x0000000000407AA8 string=0x0000000000407AAC "*"
 *   insn=0x0000000000407ABC string=0x0000000000407AC0 "4"
 *   insn=0x0000000000407AC0 string=0x0000000000407B04 "`"
 *   insn=0x0000000000407AC4 string=0x0000000000407AC8 ""
 *   insn=0x0000000000407AD8 string=0x0000000000407ADC "\t@"
 *   insn=0x0000000000407AE4 string=0x0000000000407AE8 ""
 *   insn=0x0000000000407AF8 string=0x0000000000407AFC "@"
 *   insn=0x0000000000407B04 string=0x0000000000407B08 "h"
 *   insn=0x0000000000407B10 string=0x0000000000407B14 ""
 *   insn=0x0000000000407B20 string=0x0000000000407B24 "`"
 *   insn=0x0000000000407B20 string=0x00000000001FB170 "0'"
 *   insn=0x0000000000407B24 string=0x0000000000407B28 ""
 *   insn=0x0000000000407B28 string=0x0000000000407B2C "H"
 *   insn=0x0000000000407B2C string=0x0000000000407B30 "\t\t@"
 *   insn=0x0000000000407B34 string=0x0000000000407B38 "i"
 *   insn=0x0000000000407B38 string=0x0000000000407B3C "\t"
 *   insn=0x0000000000407B38 string=0x0000000000407B64 "h"
 *   insn=0x0000000000407B40 string=0x0000000000407B44 ")"
 *   insn=0x0000000000407B44 string=0x0000000000407B48 " "
 *   insn=0x0000000000407B48 string=0x0000000000407B4C "`"
 *   insn=0x0000000000407B54 string=0x0000000000407B58 "\t"
 *   insn=0x0000000000407B5C string=0x0000000000407B60 "5"
 *   insn=0x0000000000407B64 string=0x0000000000407B68 ""
 *   insn=0x0000000000407B78 string=0x0000000000407B7C "\tD"
 *   insn=0x0000000000407B80 string=0x0000000000407B84 "!("
 *   insn=0x0000000000407B84 string=0x0000000000407B88 "A(!"
 *   insn=0x0000000000407B88 string=0x0000000000407B8C " 8 "
 *   insn=0x0000000000407BA4 string=0x0000000000407BA8 "`"
 *   insn=0x0000000000407BA4 string=0x00000000001F95E0 "0'"
 *   insn=0x0000000000407BA8 string=0x0000000000407BAC "h"
 *   insn=0x0000000000407BB0 string=0x0000000000407BB4 "\n"
 *   insn=0x0000000000407BC0 string=0x0000000000407BC4 """
 *   insn=0x0000000000407BC8 string=0x0000000000407BCC "B("
 *   insn=0x0000000000407BCC string=0x0000000000407BD0 " ( "
 *   insn=0x0000000000407BE0 string=0x0000000000407BE4 "c"
 *   insn=0x0000000000407BE4 string=0x0000000000407BE8 "u"
 *   insn=0x0000000000407BF4 string=0x0000000000407BF8 "&"
 *   insn=0x0000000000407BF8 string=0x00000000001F3C90 "P'"
 *   insn=0x0000000000407C08 string=0x0000000000407C0C "h"
 *   insn=0x0000000000407C0C string=0x0000000000407C10 "\ty@"
 *   insn=0x0000000000407C14 string=0x0000000000407C18 ""
 *   insn=0x0000000000407C1C string=0x0000000000407C20 "h"
 *   insn=0x0000000000407C20 string=0x0000000000407C24 "}@"
 *   insn=0x0000000000407C40 string=0x0000000000407C44 "!(""
 *   insn=0x0000000000407C48 string=0x0000000000407C4C "`"
 *   insn=0x0000000000407C4C string=0x0000000000407C50 "h"
 *   insn=0x0000000000407C50 string=0x0000000000407C54 "h"
 *   insn=0x0000000000407C54 string=0x0000000000407C58 "i"
 *   insn=0x0000000000407C58 string=0x0000000000407C5C "i"
 *   insn=0x0000000000407C5C string=0x0000000000407C60 "!8 "
 *   insn=0x0000000000407C6C string=0x0000000000407C70 "c"
 *   insn=0x0000000000407C70 string=0x0000000000407C74 "`"
 *   insn=0x0000000000407C7C string=0x0000000000407C80 "#"
 *   insn=0x0000000000407C80 string=0x0000000000407C84 "$"
 *   insn=0x0000000000407C84 string=0x0000000000407C88 "x@"
 *   insn=0x0000000000407C90 string=0x0000000000407C94 "a($"
 *   insn=0x0000000000407C98 string=0x0000000000407C9C "("
 *   insn=0x0000000000407CA4 string=0x0000000000407CA8 " 8#"
 *   insn=0x0000000000407CBC string=0x0000000000407CC0 ","
 *   insn=0x0000000000407CC0 string=0x0000000000407CC4 "h"
 *   insn=0x0000000000407CC4 string=0x0000000000407CC8 "`"
 *   insn=0x0000000000407CC8 string=0x0000000000407CCC "i"
 *   insn=0x0000000000407CD8 string=0x0000000000407CDC "x@"
 *   insn=0x0000000000407CDC string=0x0000000000407CE0 """
 *   insn=0x0000000000407CE0 string=0x0000000000407CE4 ")"
 *   insn=0x0000000000407CE8 string=0x0000000000407CEC "I@"
 *   insn=0x0000000000407CF0 string=0x0000000000407CF4 "A(!"
 *   insn=0x0000000000407D0C string=0x0000000000407D10 "X"
 *   insn=0x0000000000407D10 string=0x0000000000407D14 "i"U"
 *   insn=0x0000000000407D10 string=0x00000000001F6670 "0'"
 *   insn=0x0000000000407D18 string=0x0000000000407D1C "\n"
 *   insn=0x0000000000407D18 string=0x0000000000407D28 "t"
 *   insn=0x0000000000407D1C string=0x0000000000407D20 "J"
 *   insn=0x0000000000407D20 string=0x0000000000407D24 "\n"
 *   insn=0x0000000000407D28 string=0x0000000000407D2C "i""
 *   insn=0x0000000000407D2C string=0x0000000000407D30 "4"
 *   insn=0x0000000000407D34 string=0x0000000000407D38 ""
 *   insn=0x0000000000407D48 string=0x0000000000407D4C "\t@"
 *   insn=0x0000000000407D54 string=0x0000000000407D58 ""
 *   insn=0x0000000000407D68 string=0x0000000000407D6C "@"
 *   insn=0x0000000000407D7C string=0x0000000000407D80 "a"
 *   insn=0x0000000000407DA0 string=0x0000000000407DA4 ")=G"
 *   insn=0x0000000000407DA4 string=0x0000000000407DA8 "!"
 *   insn=0x0000000000407DA8 string=0x0000000000407DAC "\t"
 *   insn=0x0000000000407DAC string=0x0000000000407DB0 "\t"
 *   insn=0x0000000000407DAC string=0x0000000000407E0C "\t"
 *   insn=0x0000000000407DB0 string=0x0000000000407DB4 "*"
 *   insn=0x0000000000407DB4 string=0x0000000000407DB8 "\n"
 *   insn=0x0000000000407DC0 string=0x0000000000407E18 "?"
 *   insn=0x0000000000407DC4 string=0x0000000000407DC8 ")=G"
 *   insn=0x0000000000407DC8 string=0x0000000000407DCC "!"
 *   insn=0x0000000000407DD0 string=0x0000000000407DD4 "\t"
 *   insn=0x0000000000407DD0 string=0x0000000000407E2C "\t"
 *   insn=0x0000000000407DD4 string=0x0000000000407DD8 "*"
 *   insn=0x0000000000407DD8 string=0x0000000000407DDC "\n"
 *   insn=0x0000000000407DE4 string=0x0000000000407E38 "?"
 *   insn=0x0000000000407DE8 string=0x0000000000407DEC ")=G"
 *   insn=0x0000000000407DEC string=0x0000000000407DF0 "!"
 *   insn=0x0000000000407DF4 string=0x0000000000407DF8 "\t"
 *   insn=0x0000000000407DF4 string=0x0000000000407E4C "\t"
 *   insn=0x0000000000407DF8 string=0x0000000000407DFC "*"
 *   insn=0x0000000000407DFC string=0x0000000000407E00 "\n"
 *   insn=0x0000000000407E08 string=0x0000000000407E58 "?"
 *   insn=0x0000000000407E0C string=0x0000000000407E10 "*"
 *   insn=0x0000000000407E10 string=0x0000000000407E14 "\n"
 *   insn=0x0000000000407E20 string=0x0000000000407E24 "`"
 *   insn=0x0000000000407E2C string=0x0000000000407E30 "*"
 *   insn=0x0000000000407E30 string=0x0000000000407E34 "\n"
 *   insn=0x0000000000407E38 string=0x0000000000407E3C ","
 *   insn=0x0000000000407E40 string=0x0000000000407E44 "X"
 *   insn=0x0000000000407E4C string=0x0000000000407E50 "*"
 *   insn=0x0000000000407E50 string=0x0000000000407E54 "\n"
 *   insn=0x0000000000407E58 string=0x0000000000407E5C "l"
 *   insn=0x0000000000407E60 string=0x0000000000407E64 "P"
 *   insn=0x0000000000407E64 string=0x0000000000407E68 ""
 *   insn=0x0000000000407E6C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000407E7C string=0x0000000000407E80 ""
 *   insn=0x0000000000407E84 string=0x0000000000407E88 "!"
 *   insn=0x0000000000407E8C string=0x0000000000407E90 "\t@"
 *   insn=0x0000000000407E9C string=0x0000000000407EA0 ""
 *   insn=0x0000000000407EA4 string=0x0000000000407EA8 "!"
 *   insn=0x0000000000407EAC string=0x0000000000407EB0 "@"
 *   insn=0x0000000000407ECC string=0x0000000000407ED0 ""
 *   insn=0x0000000000407ED4 string=0x0000000000407ED8 "a"
 *   insn=0x0000000000407EDC string=0x0000000000407EE0 "\t@"
 *   insn=0x0000000000407EEC string=0x0000000000407EF0 ""
 *   insn=0x0000000000407EF4 string=0x0000000000407EF8 "a"
 *   insn=0x0000000000407EFC string=0x0000000000407F00 "@"
 *   insn=0x0000000000407F14 string=0x0000000000407F18 "T"
 *   insn=0x0000000000407F1C string=0x0000000000407F20 ""
 *   insn=0x0000000000407F2C string=0x0000000000407F30 "\t@"
 *   insn=0x0000000000407F3C string=0x0000000000407F40 ""
 *   insn=0x0000000000407F4C string=0x0000000000407F50 "@"
 *   insn=0x0000000000407F70 string=0x0000000000407F74 ""
 *   insn=0x0000000000407F78 string=0x0000000000407F7C "!"
 *   insn=0x0000000000407F80 string=0x0000000000407F84 "\t@"
 *   insn=0x0000000000407F90 string=0x0000000000407F94 ""
 *   insn=0x0000000000407F98 string=0x0000000000407F9C "!"
 *   insn=0x0000000000407FA0 string=0x0000000000407FA4 "@"
 *   insn=0x0000000000407FC4 string=0x0000000000407FC8 ""
 *   insn=0x0000000000407FD4 string=0x0000000000407FD8 "\t@"
 *   insn=0x0000000000407FE4 string=0x0000000000407FE8 ""
 *   insn=0x0000000000407FF4 string=0x0000000000407FF8 "@"
 *   insn=0x0000000000408000 string=0x0000000000408004 "o"
 *   insn=0x0000000000408010 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000408014 string=0x0000000000408018 "+"
 *   insn=0x0000000000408028 string=0x000000000040802C ""
 *   insn=0x0000000000408030 string=0x0000000000408034 "a"
 *   insn=0x0000000000408038 string=0x000000000040803C "\t@"
 *   insn=0x0000000000408048 string=0x000000000040804C ""
 *   insn=0x0000000000408050 string=0x0000000000408054 "a"
 *   insn=0x0000000000408058 string=0x000000000040805C "@"
 *   insn=0x0000000000408064 string=0x0000000000408068 "V"
 *   insn=0x0000000000408074 string=0x0000000000408078 "H"
 *   insn=0x0000000000408078 string=0x000000000040807C "\t\t@"
 *   insn=0x000000000040807C string=0x0000000000408080 ")"
 *   insn=0x0000000000408080 string=0x0000000000408084 "\t\t"
 *   insn=0x0000000000408088 string=0x000000000040808C "\t"
 *   insn=0x000000000040808C string=0x0000000000408090 ")"
 *   insn=0x0000000000408094 string=0x0000000000408098 " "
 *   insn=0x0000000000408098 string=0x000000000040809C "\t"
 *   insn=0x00000000004080A0 string=0x00000000004080A4 ""
 *   insn=0x00000000004080C4 string=0x00000000004080C8 ")"
 *   insn=0x00000000004080D0 string=0x00000000004080D4 "`"
 *   insn=0x00000000004080D8 string=0x00000000004080DC ")=G"
 *   insn=0x00000000004080DC string=0x00000000004080E0 "!"
 *   insn=0x00000000004080E0 string=0x00000000004080E4 "i"
 *   insn=0x00000000004080E4 string=0x00000000004080E8 "\t"
 *   insn=0x00000000004080E4 string=0x0000000000408110 "\t"
 *   insn=0x00000000004080E8 string=0x00000000004080EC "*"
 *   insn=0x00000000004080EC string=0x00000000004080F0 "\n"
 *   insn=0x00000000004080F4 string=0x00000000004080F8 "?"
 *   insn=0x00000000004080F8 string=0x00000000004080FC ","
 *   insn=0x0000000000408110 string=0x0000000000408114 "*"
 *   insn=0x0000000000408114 string=0x0000000000408118 "\n"
 *   insn=0x0000000000408118 string=0x000000000040811C "?"
 *   insn=0x000000000040811C string=0x0000000000408120 ""
 *   insn=0x0000000000408120 string=0x0000000000408124 "'"
 *   insn=0x0000000000408134 string=0x0000000000408138 "@"
 *   insn=0x000000000040813C string=0x0000000000408140 ")=G"
 *   insn=0x0000000000408140 string=0x0000000000408144 "!"
 *   insn=0x0000000000408144 string=0x0000000000408148 ")"
 *   insn=0x0000000000408148 string=0x000000000040814C "\t"
 *   insn=0x0000000000408148 string=0x00000000004081AC "\t"
 *   insn=0x000000000040814C string=0x0000000000408150 "*"
 *   insn=0x0000000000408150 string=0x0000000000408154 "\n"
 *   insn=0x000000000040815C string=0x0000000000408194 "?"
 *   insn=0x0000000000408174 string=0x0000000000408178 ")=G"
 *   insn=0x0000000000408178 string=0x000000000040817C "!"
 *   insn=0x000000000040817C string=0x0000000000408180 "i"
 *   insn=0x0000000000408180 string=0x0000000000408184 "\t"
 *   insn=0x0000000000408184 string=0x0000000000408188 "*"
 *   insn=0x0000000000408188 string=0x000000000040818C "\n"
 *   insn=0x0000000000408194 string=0x0000000000408198 "L"
 *   insn=0x00000000004081AC string=0x00000000004081B0 "*"
 *   insn=0x00000000004081B0 string=0x00000000004081B4 "\n"
 *   insn=0x00000000004081B4 string=0x00000000004081B8 "?"
 *   insn=0x00000000004081B8 string=0x00000000004081BC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::InventoryItemPanel::Init(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // x8
  __int64 v4; // x9
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  Caver::GUITexturedRect *v8; // x20
  Caver::TextureLibrary *v9; // x0
  _QWORD *v10; // x20
  __int64 v11; // x9
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x0
  int v16; // w8
  void *v17; // x0
  Caver::MenuItemSlot *v18; // x0
  _QWORD *v19; // x20
  __int64 v20; // x9
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x8
  __int64 v24; // x9
  void (__fastcall *v25)(_QWORD *, __int128 *); // x8
  __int64 v26; // x9
  _QWORD *v27; // x20
  __int64 v28; // x8
  __int64 v29; // x8
  Caver::InventoryTrinketSlot *v30; // x0
  _QWORD *v31; // x21
  __int64 v32; // x9
  __int64 v33; // x8
  __int64 v34; // x8
  __int64 v35; // x8
  void (__fastcall *v36)(_QWORD *, __int128 *); // x8
  __int64 v37; // x9
  _QWORD *v38; // x20
  __int64 v39; // x8
  __int64 v40; // x8
  __int128 v41; // kr00_16
  _QWORD *v42; // x20
  __int64 v43; // x8
  __int64 v44; // x8
  _QWORD *v45; // x20
  __int64 v46; // x8
  __int64 v47; // x8
  void *v48; // x0
  void (__fastcall *v49)(_QWORD *, __int128 *); // x8
  __int64 v50; // x9
  _QWORD *v51; // x20
  __int64 v52; // x8
  __int64 v53; // x8
  __int128 v54; // kr10_16
  _QWORD *v55; // x20
  __int64 v56; // x8
  __int64 v57; // x8
  _QWORD *v58; // x20
  __int64 v59; // x8
  __int64 v60; // x8
  void *v61; // x0
  void (__fastcall *v62)(_QWORD *, __int128 *); // x8
  __int64 v63; // x9
  _QWORD *v64; // x20
  __int64 v65; // x8
  __int64 v66; // x8
  __int64 v67; // x0
  __int64 v68; // x8
  Caver::GUITexturedRect *v69; // x0
  __int64 v70; // x8
  unsigned int v71; // w20
  float v72; // w21
  unsigned int v73; // s0
  __int64 v74; // x0
  __int64 v75; // x8
  float v76; // w9
  unsigned int v77; // w10
  float v78; // s0
  float v79; // s1
  __int64 v80; // x21
  __int64 v81; // x8
  unsigned int v82; // w9
  float v83; // s0
  int v84; // w9
  float v85; // s1
  Caver::GUIView *v86; // x0
  __int64 v87; // x8
  __int64 v88; // x9
  float v89; // s0
  float v90; // s1
  float v91; // s3
  Caver::GUIView *v92; // x0
  __int64 v93; // x9
  float v94; // s2
  float v95; // w8
  __int64 result; // x0
  __int64 v97; // x8
  __int64 v98; // x9
  _QWORD *v99; // x20
  __int64 v100; // x8
  __int64 v101; // x8
  unsigned int *v102; // x8
  int v103; // w9
  unsigned int *v104; // x8
  int v105; // w9
  unsigned int *v106; // x8
  int v107; // w9
  __int64 v108; // [xsp+8h] [xbp-78h] BYREF
  int v109; // [xsp+10h] [xbp-70h]
  float v110; // [xsp+14h] [xbp-6Ch]
  int v111; // [xsp+18h] [xbp-68h]
  int v112; // [xsp+1Ch] [xbp-64h]
  int v113; // [xsp+20h] [xbp-60h]
  int v114; // [xsp+24h] [xbp-5Ch]
  __int64 v115; // [xsp+30h] [xbp-50h] BYREF
  __int128 v116; // [xsp+38h] [xbp-48h] BYREF
  __int64 v117; // [xsp+48h] [xbp-38h]

  v117 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *a2;
  v3 = a2[1];
  if ( v3 )
    ++*(_QWORD *)(v3 + 8);
  v5 = (_QWORD *)a1[33];
  a1[32] = v4;
  a1[33] = v3;
  if ( v5 )
  {
    v6 = v5[1] - 1LL;
    v5[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  v8 = (Caver::GUITexturedRect *)operator new(0x70u);
  Caver::GUITexturedRect::GUITexturedRect(v8);
  *(_QWORD *)&v116 = v8;
  boost::detail::shared_count::shared_count<Caver::GUITexturedRect>();
  boost::detail::sp_enable_shared_from_this();
  v10 = (_QWORD *)a1[35];
  v11 = v116;
  *(_QWORD *)&v116 = a1[34];
  v12 = *((_QWORD *)&v116 + 1);
  a1[34] = v11;
  a1[35] = v12;
  *((_QWORD *)&v116 + 1) = v10;
  if ( v10 )
  {
    v13 = v10[1] - 1LL;
    v10[1] = v13;
    if ( !v13 )
    {
      v9 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v14 = v10[2] - 1LL;
      v10[2] = v14;
      if ( !v14 )
        v9 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
    }
  }
  Caver::TextureLibrary::sharedLibrary(v9);
  sub_566BB8((int)&v115, "ui_inventory_panel");
  Caver::TextureLibrary::TextureForName();
  v116 = 0u;
  Caver::GUITexturedRect::InitWithTexture();
  v15 = v108;
  if ( v108 )
  {
    v16 = *(_DWORD *)(v108 + 8) - 1;
    *(_DWORD *)(v108 + 8) = v16;
    if ( !v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  }
  v17 = (void *)(v115 - 24);
  if ( (__int64 *)(v115 - 24) != &qword_6FD2E0 )
  {
    v102 = (unsigned int *)(v115 - 8);
    if ( &pthread_create )
    {
      do
        v103 = __ldaxr(v102);
      while ( __stlxr(v103 - 1, v102) );
    }
    else
    {
      v103 = (*v102)--;
    }
    if ( v103 <= 0 )
      operator delete(v17);
  }
  v18 = (Caver::MenuItemSlot *)operator new(0x280u);
  Caver::MenuItemSlot::MenuItemSlot(v18);
  boost::shared_ptr<Caver::MenuItemSlot>::shared_ptr<Caver::MenuItemSlot>();
  v19 = (_QWORD *)a1[37];
  v20 = v116;
  *(_QWORD *)&v116 = a1[36];
  v21 = *((_QWORD *)&v116 + 1);
  a1[36] = v20;
  a1[37] = v21;
  *((_QWORD *)&v116 + 1) = v19;
  if ( v19 )
  {
    v22 = v19[1] - 1LL;
    v19[1] = v22;
    if ( !v22 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
      v23 = v19[2] - 1LL;
      v19[2] = v23;
      if ( !v23 )
        (*(void (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
    }
  }
  Caver::MenuItemSlot::Init((Caver::MenuItemSlot *)a1[36], 1.0);
  v24 = a1[36];
  *(_BYTE *)(v24 + 288) = 0;
  v25 = *(void (__fastcall **)(_QWORD *, __int128 *))(*a1 + 96LL);
  *(_QWORD *)&v116 = v24;
  v26 = a1[37];
  *((_QWORD *)&v116 + 1) = v26;
  if ( v26 )
    ++*(_QWORD *)(v26 + 8);
  v25(a1, &v116);
  v27 = (_QWORD *)*((_QWORD *)&v116 + 1);
  if ( *((_QWORD *)&v116 + 1) )
  {
    v28 = *(_QWORD *)(*((_QWORD *)&v116 + 1) + 8LL) - 1LL;
    *(_QWORD *)(*((_QWORD *)&v116 + 1) + 8LL) = v28;
    if ( !v28 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
      v29 = v27[2] - 1LL;
      v27[2] = v29;
      if ( !v29 )
        (*(void (__fastcall **)(_QWORD *))(*v27 + 24LL))(v27);
    }
  }
  v30 = (Caver::InventoryTrinketSlot *)operator new(0x160u);
  Caver::InventoryTrinketSlot::InventoryTrinketSlot(v30);
  boost::shared_ptr<Caver::InventoryTrinketSlot>::shared_ptr<Caver::InventoryTrinketSlot>();
  v31 = (_QWORD *)a1[39];
  v32 = v116;
  *(_QWORD *)&v116 = a1[38];
  v33 = *((_QWORD *)&v116 + 1);
  a1[38] = v32;
  a1[39] = v33;
  *((_QWORD *)&v116 + 1) = v31;
  if ( v31 )
  {
    v34 = v31[1] - 1LL;
    v31[1] = v34;
    if ( !v34 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v31 + 16LL))(v31);
      v35 = v31[2] - 1LL;
      v31[2] = v35;
      if ( !v35 )
        (*(void (__fastcall **)(_QWORD *))(*v31 + 24LL))(v31);
    }
  }
  *(_QWORD *)(a1[38] + 248LL) = a1 + 30;
  Caver::InventoryTrinketSlot::Init();
  v36 = *(void (__fastcall **)(_QWORD *, __int128 *))(*a1 + 96LL);
  *(_QWORD *)&v116 = a1[38];
  v37 = a1[39];
  *((_QWORD *)&v116 + 1) = v37;
  if ( v37 )
    ++*(_QWORD *)(v37 + 8);
  v36(a1, &v116);
  v38 = (_QWORD *)*((_QWORD *)&v116 + 1);
  if ( *((_QWORD *)&v116 + 1) )
  {
    v39 = *(_QWORD *)(*((_QWORD *)&v116 + 1) + 8LL) - 1LL;
    *(_QWORD *)(*((_QWORD *)&v116 + 1) + 8LL) = v39;
    if ( !v39 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v38 + 16LL))(v38);
      v40 = v38[2] - 1LL;
      v38[2] = v40;
      if ( !v40 )
        (*(void (__fastcall **)(_QWORD *))(*v38 + 24LL))(v38);
    }
  }
  sub_566BB8((int)&v108, "");
  v113 = -16777216;
  v114 = -1;
  Caver::GameInterfaceBuilder::NormalLabel();
  v41 = v116;
  if ( *((_QWORD *)&v116 + 1) )
    ++*(_QWORD *)(*((_QWORD *)&v116 + 1) + 8LL);
  v42 = (_QWORD *)a1[43];
  *((_OWORD *)a1 + 21) = v41;
  if ( v42 )
  {
    v43 = v42[1] - 1LL;
    v42[1] = v43;
    if ( !v43 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v42 + 16LL))(v42);
      v44 = v42[2] - 1LL;
      v42[2] = v44;
      if ( !v44 )
        (*(void (__fastcall **)(_QWORD *))(*v42 + 24LL))(v42);
    }
  }
  v45 = (_QWORD *)*((_QWORD *)&v116 + 1);
  if ( *((_QWORD *)&v116 + 1) )
  {
    v46 = *(_QWORD *)(*((_QWORD *)&v116 + 1) + 8LL) - 1LL;
    *(_QWORD *)(*((_QWORD *)&v116 + 1) + 8LL) = v46;
    if ( !v46 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v45 + 16LL))(v45);
      v47 = v45[2] - 1LL;
      v45[2] = v47;
      if ( !v47 )
        (*(void (__fastcall **)(_QWORD *))(*v45 + 24LL))(v45);
    }
  }
  v48 = (void *)(v108 - 24);
  if ( (__int64 *)(v108 - 24) != &qword_6FD2E0 )
  {
    v104 = (unsigned int *)(v108 - 8);
    if ( &pthread_create )
    {
      do
        v105 = __ldaxr(v104);
      while ( __stlxr(v105 - 1, v104) );
    }
    else
    {
      v105 = (*v104)--;
    }
    if ( v105 <= 0 )
      operator delete(v48);
  }
  v49 = *(void (__fastcall **)(_QWORD *, __int128 *))(*a1 + 96LL);
  *(_QWORD *)&v116 = a1[42];
  v50 = a1[43];
  *((_QWORD *)&v116 + 1) = v50;
  if ( v50 )
    ++*(_QWORD *)(v50 + 8);
  v49(a1, &v116);
  v51 = (_QWORD *)*((_QWORD *)&v116 + 1);
  if ( *((_QWORD *)&v116 + 1) )
  {
    v52 = *(_QWORD *)(*((_QWORD *)&v116 + 1) + 8LL) - 1LL;
    *(_QWORD *)(*((_QWORD *)&v116 + 1) + 8LL) = v52;
    if ( !v52 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v51 + 16LL))(v51);
      v53 = v51[2] - 1LL;
      v51[2] = v53;
      if ( !v53 )
        (*(void (__fastcall **)(_QWORD *))(*v51 + 24LL))(v51);
    }
  }
  sub_566BB8((int)&v108, "");
  v111 = -16777216;
  v112 = -1;
  Caver::GameInterfaceBuilder::SmallLabel();
  v54 = v116;
  if ( *((_QWORD *)&v116 + 1) )
    ++*(_QWORD *)(*((_QWORD *)&v116 + 1) + 8LL);
  v55 = (_QWORD *)a1[45];
  *((_OWORD *)a1 + 22) = v54;
  if ( v55 )
  {
    v56 = v55[1] - 1LL;
    v55[1] = v56;
    if ( !v56 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v55 + 16LL))(v55);
      v57 = v55[2] - 1LL;
      v55[2] = v57;
      if ( !v57 )
        (*(void (__fastcall **)(_QWORD *))(*v55 + 24LL))(v55);
    }
  }
  v58 = (_QWORD *)*((_QWORD *)&v116 + 1);
  if ( *((_QWORD *)&v116 + 1) )
  {
    v59 = *(_QWORD *)(*((_QWORD *)&v116 + 1) + 8LL) - 1LL;
    *(_QWORD *)(*((_QWORD *)&v116 + 1) + 8LL) = v59;
    if ( !v59 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v58 + 16LL))(v58);
      v60 = v58[2] - 1LL;
      v58[2] = v60;
      if ( !v60 )
        (*(void (__fastcall **)(_QWORD *))(*v58 + 24LL))(v58);
    }
  }
  v61 = (void *)(v108 - 24);
  if ( (__int64 *)(v108 - 24) != &qword_6FD2E0 )
  {
    v106 = (unsigned int *)(v108 - 8);
    if ( &pthread_create )
    {
      do
        v107 = __ldaxr(v106);
      while ( __stlxr(v107 - 1, v106) );
    }
    else
    {
      v107 = (*v106)--;
    }
    if ( v107 <= 0 )
      operator delete(v61);
  }
  v62 = *(void (__fastcall **)(_QWORD *, __int128 *))(*a1 + 96LL);
  *(_QWORD *)&v116 = a1[44];
  v63 = a1[45];
  *((_QWORD *)&v116 + 1) = v63;
  if ( v63 )
    ++*(_QWORD *)(v63 + 8);
  v62(a1, &v116);
  v64 = (_QWORD *)*((_QWORD *)&v116 + 1);
  if ( *((_QWORD *)&v116 + 1) )
  {
    v65 = *(_QWORD *)(*((_QWORD *)&v116 + 1) + 8LL) - 1LL;
    *(_QWORD *)(*((_QWORD *)&v116 + 1) + 8LL) = v65;
    if ( !v65 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v64 + 16LL))(v64);
      v66 = v64[2] - 1LL;
      v64[2] = v66;
      if ( !v66 )
        (*(void (__fastcall **)(_QWORD *))(*v64 + 24LL))(v64);
    }
  }
  v67 = a1[36];
  v68 = *(_QWORD *)(v67 + 124);
  *(_QWORD *)&v116 = 1113063424;
  *((_QWORD *)&v116 + 1) = v68;
  Caver::GUIView::SetFrame((Caver::GUIView *)v67, (const Caver::Rectangle *)&v116);
  v69 = (Caver::GUITexturedRect *)a1[34];
  v70 = *(_QWORD *)v69;
  if ( *(_QWORD *)v69 )
  {
    v71 = *(_DWORD *)(v70 + 84);
    v72 = *(float *)(v70 + 88);
    if ( !*(_DWORD *)(v70 + 8) )
    {
      (*(void (__fastcall **)(_QWORD *__return_ptr, _QWORD))(*(_QWORD *)v70 + 8LL))((_QWORD *)v70, *(_QWORD *)v69);
      v69 = (Caver::GUITexturedRect *)a1[34];
    }
  }
  else
  {
    v71 = 0;
    v72 = 0.0;
  }
  *(float *)&v73 = roundf(
                     (float)(*(float *)(a1[36] + 120LL) + (float)(*(float *)(a1[36] + 128LL) * 0.5))
                   - (float)(v72 * 0.5));
  LODWORD(v116) = 1109393408;
  *(_QWORD *)((char *)&v116 + 4) = __PAIR64__(v71, v73);
  *((float *)&v116 + 3) = v72;
  Caver::GUITexturedRect::CreateWithBounds(v69, (const Caver::Rectangle *)&v116, 0);
  v74 = a1[38];
  v75 = a1[36];
  v77 = *(_DWORD *)(v74 + 124);
  v76 = *(float *)(v74 + 128);
  v78 = *(float *)(v75 + 128);
  v79 = *(float *)(v75 + 120);
  LODWORD(v116) = 0;
  *(_QWORD *)((char *)&v116 + 4) = __PAIR64__(
                                     v77,
                                     COERCE_UNSIGNED_INT(roundf((float)(v79 + (float)(v78 * 0.5)) - (float)(v76 * 0.5))));
  *((float *)&v116 + 3) = v76;
  Caver::GUIView::SetFrame((Caver::GUIView *)v74, (const Caver::Rectangle *)&v116);
  v80 = a1[38];
  Caver::Rectangle::RectangleByOutsetting((__int64 *)&v116, (Caver::Rectangle *)(v80 + 132), 25.0);
  *(_OWORD *)(v80 + 148) = v116;
  v81 = a1[36];
  v82 = *(_DWORD *)(v81 + 120);
  LODWORD(v116) = 0;
  *(_QWORD *)((char *)&v116 + 4) = __PAIR64__(v71, v82);
  HIDWORD(v116) = *(_DWORD *)(v81 + 128);
  (*(void (__fastcall **)(_QWORD *, __int128 *))(*a1 + 248LL))(a1, &v116);
  v83 = *((float *)&v116 + 1);
  v84 = DWORD2(v116);
  v85 = (float)(*((float *)&v116 + 1) + *((float *)&v116 + 3)) + 10.0;
  v86 = (Caver::GUIView *)a1[42];
  *((_DWORD *)a1 + 37) = v116;
  v87 = a1[36];
  *((_DWORD *)a1 + 39) = v84;
  v88 = a1[34];
  *((float *)a1 + 38) = v83 + -15.0;
  *((float *)a1 + 40) = (float)(v83 + (float)(v85 - v83)) - (float)(v83 + -15.0);
  v89 = (float)(*(float *)(v87 + 116) + *(float *)(v87 + 124)) + 10.0;
  v90 = *(float *)(v88 + 16) + *(float *)(v88 + 24);
  v91 = *(float *)(*((_QWORD *)v86 + 30) + 72LL);
  LODWORD(v87) = *(_DWORD *)(v88 + 20);
  *(float *)&v108 = v89;
  *((float *)&v108 + 1) = (float)(v90 - v91) + -3.0;
  v109 = v87;
  v110 = v91;
  Caver::GUIView::SetFrame(v86, (const Caver::Rectangle *)&v108);
  v92 = (Caver::GUIView *)a1[44];
  v93 = a1[34];
  v94 = *(float *)(v93 + 16);
  LODWORD(v93) = *(_DWORD *)(v93 + 20);
  v95 = *(float *)(*((_QWORD *)v92 + 30) + 72LL);
  *(float *)&v108 = (float)(*(float *)(a1[36] + 116LL) + *(float *)(a1[36] + 124LL)) + 12.0;
  *((float *)&v108 + 1) = v94 + 2.0;
  v109 = v93;
  v110 = v95;
  Caver::GUIView::SetFrame(v92, (const Caver::Rectangle *)&v108);
  result = Caver::InventoryItemPanel::UpdateLabels((Caver::InventoryItemPanel *)a1);
  v98 = a1[42];
  v97 = a1[43];
  if ( v97 )
    ++*(_QWORD *)(v97 + 8);
  v99 = (_QWORD *)a1[41];
  a1[40] = v98;
  a1[41] = v97;
  if ( v99 )
  {
    v100 = v99[1] - 1LL;
    v99[1] = v100;
    if ( !v100 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v99 + 16LL))(v99);
      v101 = v99[2] - 1LL;
      v99[2] = v101;
      if ( !v101 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v99 + 24LL))(v99);
    }
  }
  return result;
}

