/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AF920
 * Mangled: _ZN5Caver19SimpleGlowComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::SimpleGlowComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000001F9F00  Caver::SimpleGlowComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000002AF810  Caver::SimpleGlowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F4400  Caver::GlowComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001F9F00  Caver::SimpleGlowComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 422
 *   insn=0x00000000002AF938 string=0x00000000002AF93C "W"
 *   insn=0x00000000002AF94C string=0x00000000001F4400 "P'"
 *   insn=0x00000000002AF950 string=0x0000000000583F83 "color"
 *   insn=0x00000000002AF98C string=0x00000000002AF990 "t"
 *   insn=0x00000000002AF9A0 string=0x00000000002AF9A4 ""
 *   insn=0x00000000002AF9B0 string=0x00000000002AF9B4 "\t\t@"
 *   insn=0x00000000002AF9B8 string=0x00000000002AF9BC ""
 *   insn=0x00000000002AF9C0 string=0x00000000002AF9C4 "h"
 *   insn=0x00000000002AF9C4 string=0x00000000002AF9C8 ""
 *   insn=0x00000000002AF9C8 string=0x00000000002AF9CC "h"
 *   insn=0x00000000002AF9E0 string=0x00000000001F78E0 "0'"
 *   insn=0x00000000002AF9F4 string=0x00000000002AF9F8 "!("
 *   insn=0x00000000002AFA0C string=0x00000000005896A3 "size"
 *   insn=0x00000000002AFA18 string=0x00000000002AFA1C "g"
 *   insn=0x00000000002AFA3C string=0x00000000002AFA40 ""
 *   insn=0x00000000002AFA48 string=0x00000000002AFA4C "t"
 *   insn=0x00000000002AFA5C string=0x00000000002AFA60 ""
 *   insn=0x00000000002AFA68 string=0x00000000002AFA6C "C"
 *   insn=0x00000000002AFA6C string=0x00000000002AFA70 "\t\t@"
 *   insn=0x00000000002AFA74 string=0x00000000002AFA78 ""
 *   insn=0x00000000002AFA7C string=0x00000000002AFA80 "h"
 *   insn=0x00000000002AFA80 string=0x00000000002AFA84 ""
 *   insn=0x00000000002AFA84 string=0x00000000002AFA88 "h"
 *   insn=0x00000000002AFAB8 string=0x00000000002AFABC "a%"
 *   insn=0x00000000002AFAC0 string=0x0000000000589AC0 "numSegments"
 *   insn=0x00000000002AFACC string=0x00000000002AFAD0 ":"
 *   insn=0x00000000002AFAFC string=0x00000000002AFB00 "t"
 *   insn=0x00000000002AFB10 string=0x00000000002AFB14 ""
 *   insn=0x00000000002AFB1C string=0x00000000002AFB20 "C"
 *   insn=0x00000000002AFB20 string=0x00000000002AFB24 "\t\t@"
 *   insn=0x00000000002AFB28 string=0x00000000002AFB2C ""
 *   insn=0x00000000002AFB30 string=0x00000000002AFB34 "h"
 *   insn=0x00000000002AFB34 string=0x00000000002AFB38 ""
 *   insn=0x00000000002AFB38 string=0x00000000002AFB3C "h"
 *   insn=0x00000000002AFB4C string=0x00000000002AFB50 "d"
 *   insn=0x00000000002AFB5C string=0x00000000002AFB60 "a!"
 *   insn=0x00000000002AFB74 string=0x0000000000589ACC "depth"
 *   insn=0x00000000002AFB80 string=0x00000000002AFB84 ""
 *   insn=0x00000000002AFB9C string=0x00000000002AFBA0 "b"
 *   insn=0x00000000002AFBA8 string=0x00000000002AFBAC "t"
 *   insn=0x00000000002AFBBC string=0x00000000002AFBC0 ""
 *   insn=0x00000000002AFBC4 string=0x00000000002AFBC8 "X"
 *   insn=0x00000000002AFBC8 string=0x00000000002AFBCC "C"
 *   insn=0x00000000002AFBCC string=0x00000000002AFBD0 "\t\t@"
 *   insn=0x00000000002AFBD4 string=0x00000000002AFBD8 ""
 *   insn=0x00000000002AFBDC string=0x00000000002AFBE0 "h"
 *   insn=0x00000000002AFBE0 string=0x00000000002AFBE4 ""
 *   insn=0x00000000002AFBE4 string=0x00000000002AFBE8 "h"
 *   insn=0x00000000002AFBF8 string=0x00000000002AFBFC "9"
 *   insn=0x00000000002AFC08 string=0x00000000002AFC0C "A"
 *   insn=0x00000000002AFC20 string=0x0000000000589AD2 "offsetX"
 *   insn=0x00000000002AFC34 string=0x00000000002AFC38 ""
 *   insn=0x00000000002AFC48 string=0x00000000002AFC4C "7"
 *   insn=0x00000000002AFC54 string=0x00000000002AFC58 "t"
 *   insn=0x00000000002AFC68 string=0x00000000002AFC6C ""
 *   insn=0x00000000002AFC70 string=0x00000000002AFC74 "-"
 *   insn=0x00000000002AFC74 string=0x00000000002AFC78 "C"
 *   insn=0x00000000002AFC78 string=0x00000000002AFC7C "\t\t@"
 *   insn=0x00000000002AFC80 string=0x00000000002AFC84 ""
 *   insn=0x00000000002AFC88 string=0x00000000002AFC8C "h"
 *   insn=0x00000000002AFC8C string=0x00000000002AFC90 ""
 *   insn=0x00000000002AFC90 string=0x00000000002AFC94 "h"
 *   insn=0x00000000002AFCB4 string=0x00000000002AFCB8 "!"
 *   insn=0x00000000002AFCCC string=0x0000000000589ADA "offsetY"
 *   insn=0x00000000002AFCE0 string=0x00000000002AFCE4 "("
 *   insn=0x00000000002AFD00 string=0x00000000002AFD04 "t"
 *   insn=0x00000000002AFD14 string=0x00000000002AFD18 ""
 *   insn=0x00000000002AFD20 string=0x00000000002AFD24 "C"
 *   insn=0x00000000002AFD24 string=0x00000000002AFD28 "\t\t@"
 *   insn=0x00000000002AFD2C string=0x00000000002AFD30 ""
 *   insn=0x00000000002AFD34 string=0x00000000002AFD38 "h"
 *   insn=0x00000000002AFD38 string=0x00000000002AFD3C ""
 *   insn=0x00000000002AFD3C string=0x00000000002AFD40 "h"
 *   insn=0x00000000002AFD78 string=0x0000000000589AE2 "pulseAmount"
 *   insn=0x00000000002AFD8C string=0x00000000002AFD90 "H"
 *   insn=0x00000000002AFDAC string=0x00000000002AFDB0 "t"
 *   insn=0x00000000002AFDC0 string=0x00000000002AFDC4 ""
 *   insn=0x00000000002AFDCC string=0x00000000002AFDD0 "C"
 *   insn=0x00000000002AFDD0 string=0x00000000002AFDD4 "\t\t@"
 *   insn=0x00000000002AFDD8 string=0x00000000002AFDDC ""
 *   insn=0x00000000002AFDE0 string=0x00000000002AFDE4 "h"
 *   insn=0x00000000002AFDE4 string=0x00000000002AFDE8 ""
 *   insn=0x00000000002AFDE8 string=0x00000000002AFDEC "h"
 *   insn=0x00000000002AFE24 string=0x0000000000589AEE "pulseTime"
 *   insn=0x00000000002AFE30 string=0x00000000002AFE34 "a"
 *   insn=0x00000000002AFE38 string=0x00000000002AFE3C "h"
 *   insn=0x00000000002AFE58 string=0x00000000002AFE5C "t"
 *   insn=0x00000000002AFE6C string=0x00000000002AFE70 ""
 *   insn=0x00000000002AFE78 string=0x00000000002AFE7C "C"
 *   insn=0x00000000002AFE7C string=0x00000000002AFE80 "\t\t@"
 *   insn=0x00000000002AFE84 string=0x00000000002AFE88 ""
 *   insn=0x00000000002AFE8C string=0x00000000002AFE90 "h"
 *   insn=0x00000000002AFE90 string=0x00000000002AFE94 ""
 *   insn=0x00000000002AFE94 string=0x00000000002AFE98 "h"
 *   insn=0x00000000002AFEC8 string=0x00000000002AFECC "a"
 *   insn=0x00000000002AFEFC string=0x00000000002AFF00 ")=G"
 *   insn=0x00000000002AFF00 string=0x00000000002AFF04 "!"
 *   insn=0x00000000002AFF08 string=0x00000000002AFF0C "\t"
 *   insn=0x00000000002AFF08 string=0x00000000002B013C "\t"
 *   insn=0x00000000002AFF0C string=0x00000000002AFF10 "*"
 *   insn=0x00000000002AFF10 string=0x00000000002AFF14 "\n"
 *   insn=0x00000000002AFF1C string=0x00000000002B0148 "?"
 *   insn=0x00000000002AFF20 string=0x00000000002AFF24 ")=G"
 *   insn=0x00000000002AFF24 string=0x00000000002AFF28 "!"
 *   insn=0x00000000002AFF2C string=0x00000000002AFF30 "\t"
 *   insn=0x00000000002AFF2C string=0x00000000002B015C "\t"
 *   insn=0x00000000002AFF30 string=0x00000000002AFF34 "*"
 *   insn=0x00000000002AFF34 string=0x00000000002AFF38 "\n"
 *   insn=0x00000000002AFF40 string=0x00000000002B0168 "?"
 *   insn=0x00000000002AFF44 string=0x00000000002AFF48 ")=G"
 *   insn=0x00000000002AFF48 string=0x00000000002AFF4C "!"
 *   insn=0x00000000002AFF4C string=0x00000000002AFF50 "i"
 *   insn=0x00000000002AFF50 string=0x00000000002AFF54 "\t"
 *   insn=0x00000000002AFF50 string=0x00000000002B017C "\t"
 *   insn=0x00000000002AFF54 string=0x00000000002AFF58 "*"
 *   insn=0x00000000002AFF58 string=0x00000000002AFF5C "\n"
 *   insn=0x00000000002AFF64 string=0x00000000002B0188 "?"
 *   insn=0x00000000002AFF68 string=0x00000000002AFF6C ")=G"
 *   insn=0x00000000002AFF6C string=0x00000000002AFF70 "!"
 *   insn=0x00000000002AFF70 string=0x00000000002AFF74 "I"
 *   insn=0x00000000002AFF74 string=0x00000000002AFF78 "\t"
 *   insn=0x00000000002AFF74 string=0x00000000002B019C "\t"
 *   insn=0x00000000002AFF78 string=0x00000000002AFF7C "*"
 *   insn=0x00000000002AFF7C string=0x00000000002AFF80 "\n"
 *   insn=0x00000000002AFF88 string=0x00000000002B01A8 "?"
 *   insn=0x00000000002AFF8C string=0x00000000002AFF90 ")=G"
 *   insn=0x00000000002AFF90 string=0x00000000002AFF94 "!"
 *   insn=0x00000000002AFF94 string=0x00000000002AFF98 ")"
 *   insn=0x00000000002AFF98 string=0x00000000002AFF9C "\t"
 *   insn=0x00000000002AFF98 string=0x00000000002B01BC "\t"
 *   insn=0x00000000002AFF9C string=0x00000000002AFFA0 "*"
 *   insn=0x00000000002AFFA0 string=0x00000000002AFFA4 "\n"
 *   insn=0x00000000002AFFAC string=0x00000000002B01C8 "?"
 *   insn=0x00000000002AFFB0 string=0x00000000002AFFB4 ")=G"
 *   insn=0x00000000002AFFB4 string=0x00000000002AFFB8 "!"
 *   insn=0x00000000002AFFB8 string=0x00000000002AFFBC "\t"
 *   insn=0x00000000002AFFBC string=0x00000000002AFFC0 "\t"
 *   insn=0x00000000002AFFBC string=0x00000000002B01DC "\t"
 *   insn=0x00000000002AFFC0 string=0x00000000002AFFC4 "*"
 *   insn=0x00000000002AFFC4 string=0x00000000002AFFC8 "\n"
 *   insn=0x00000000002AFFD0 string=0x00000000002B01E8 "?"
 *   insn=0x00000000002AFFD4 string=0x00000000002AFFD8 ")=G"
 *   insn=0x00000000002AFFD8 string=0x00000000002AFFDC "!"
 *   insn=0x00000000002AFFE0 string=0x00000000002AFFE4 "\t"
 *   insn=0x00000000002AFFE0 string=0x00000000002B01FC "\t"
 *   insn=0x00000000002AFFE4 string=0x00000000002AFFE8 "*"
 *   insn=0x00000000002AFFE8 string=0x00000000002AFFEC "\n"
 *   insn=0x00000000002AFFF4 string=0x00000000002B0208 "?"
 *   insn=0x00000000002AFFF8 string=0x00000000002AFFFC ")=G"
 *   insn=0x00000000002AFFFC string=0x00000000002B0000 "!"
 *   insn=0x00000000002B0004 string=0x00000000002B0008 "\t"
 *   insn=0x00000000002B0004 string=0x00000000002B021C "\t"
 *   insn=0x00000000002B0008 string=0x00000000002B000C "*"
 *   insn=0x00000000002B000C string=0x00000000002B0010 "\n"
 *   insn=0x00000000002B0018 string=0x00000000002B0228 "?"
 *   insn=0x00000000002B001C string=0x00000000002B0020 ")=G"
 *   insn=0x00000000002B0020 string=0x00000000002B0024 "!"
 *   insn=0x00000000002B0028 string=0x00000000002B002C "\t"
 *   insn=0x00000000002B0028 string=0x00000000002B023C "\t"
 *   insn=0x00000000002B002C string=0x00000000002B0030 "*"
 *   insn=0x00000000002B0030 string=0x00000000002B0034 "\n"
 *   insn=0x00000000002B003C string=0x00000000002B0248 "?"
 *   insn=0x00000000002B0040 string=0x00000000002B0044 ")=G"
 *   insn=0x00000000002B0044 string=0x00000000002B0048 "!"
 *   insn=0x00000000002B004C string=0x00000000002B0050 "\t"
 *   insn=0x00000000002B004C string=0x00000000002B025C "\t"
 *   insn=0x00000000002B0050 string=0x00000000002B0054 "*"
 *   insn=0x00000000002B0054 string=0x00000000002B0058 "\n"
 *   insn=0x00000000002B0060 string=0x00000000002B0268 "?"
 *   insn=0x00000000002B0064 string=0x00000000002B0068 ")=G"
 *   insn=0x00000000002B0068 string=0x00000000002B006C "!"
 *   insn=0x00000000002B006C string=0x00000000002B0070 "i"
 *   insn=0x00000000002B0070 string=0x00000000002B0074 "\t"
 *   insn=0x00000000002B0070 string=0x00000000002B027C "\t"
 *   insn=0x00000000002B0074 string=0x00000000002B0078 "*"
 *   insn=0x00000000002B0078 string=0x00000000002B007C "\n"
 *   insn=0x00000000002B0084 string=0x00000000002B0288 "?"
 *   insn=0x00000000002B0088 string=0x00000000002B008C ")=G"
 *   insn=0x00000000002B008C string=0x00000000002B0090 "!"
 *   insn=0x00000000002B0090 string=0x00000000002B0094 "I"
 *   insn=0x00000000002B0094 string=0x00000000002B0098 "\t"
 *   insn=0x00000000002B0094 string=0x00000000002B029C "\t"
 *   insn=0x00000000002B0098 string=0x00000000002B009C "*"
 *   insn=0x00000000002B009C string=0x00000000002B00A0 "\n"
 *   insn=0x00000000002B00A8 string=0x00000000002B02A8 "?"
 *   insn=0x00000000002B00AC string=0x00000000002B00B0 ")=G"
 *   insn=0x00000000002B00B0 string=0x00000000002B00B4 "!"
 *   insn=0x00000000002B00B4 string=0x00000000002B00B8 ")"
 *   insn=0x00000000002B00B8 string=0x00000000002B00BC "\t"
 *   insn=0x00000000002B00B8 string=0x00000000002B02BC "\t"
 *   insn=0x00000000002B00BC string=0x00000000002B00C0 "*"
 *   insn=0x00000000002B00C0 string=0x00000000002B00C4 "\n"
 *   insn=0x00000000002B00CC string=0x00000000002B02C8 "?"
 *   insn=0x00000000002B00D0 string=0x00000000002B00D4 ")=G"
 *   insn=0x00000000002B00D4 string=0x00000000002B00D8 "!"
 *   insn=0x00000000002B00D8 string=0x00000000002B00DC "\t"
 *   insn=0x00000000002B00DC string=0x00000000002B00E0 "\t"
 *   insn=0x00000000002B00DC string=0x00000000002B02DC "\t"
 *   insn=0x00000000002B00E0 string=0x00000000002B00E4 "*"
 *   insn=0x00000000002B00E4 string=0x00000000002B00E8 "\n"
 *   insn=0x00000000002B00EC string=0x00000000002B00F0 "~"
 *   insn=0x00000000002B00F0 string=0x00000000002B02E8 "?"
 *   insn=0x00000000002B00F4 string=0x00000000002B00F8 ")=G"
 *   insn=0x00000000002B00F8 string=0x00000000002B00FC "!"
 *   insn=0x00000000002B0100 string=0x00000000002B0104 "\t"
 *   insn=0x00000000002B0100 string=0x00000000002B02FC "\t"
 *   insn=0x00000000002B0104 string=0x00000000002B0108 "*"
 *   insn=0x00000000002B0108 string=0x00000000002B010C "\n"
 *   insn=0x00000000002B0110 string=0x00000000002B0114 "}"
 *   insn=0x00000000002B0114 string=0x00000000002B0308 "?"
 *   insn=0x00000000002B0118 string=0x00000000002B011C ")=G"
 *   insn=0x00000000002B011C string=0x00000000002B0120 "!"
 *   insn=0x00000000002B0124 string=0x00000000002B0128 "\t"
 *   insn=0x00000000002B0124 string=0x00000000002B031C "\t"
 *   insn=0x00000000002B0128 string=0x00000000002B012C "*"
 *   insn=0x00000000002B012C string=0x00000000002B0130 "\n"
 *   insn=0x00000000002B0134 string=0x00000000002B0138 "|"
 *   insn=0x00000000002B0138 string=0x00000000002B0328 "?"
 *   insn=0x00000000002B013C string=0x00000000002B0140 "*"
 *   insn=0x00000000002B0140 string=0x00000000002B0144 "\n"
 *   insn=0x00000000002B0154 string=0x00000000002B0158 ")"
 *   insn=0x00000000002B015C string=0x00000000002B0160 "*"
 *   insn=0x00000000002B0160 string=0x00000000002B0164 "\n"
 *   insn=0x00000000002B0174 string=0x00000000002B0178 "%"
 *   insn=0x00000000002B017C string=0x00000000002B0180 "*"
 *   insn=0x00000000002B0180 string=0x00000000002B0184 "\n"
 *   insn=0x00000000002B0188 string=0x00000000002B018C ","
 *   insn=0x00000000002B0194 string=0x00000000002B0198 "F"
 *   insn=0x00000000002B019C string=0x00000000002B01A0 "*"
 *   insn=0x00000000002B01A0 string=0x00000000002B01A4 "\n"
 *   insn=0x00000000002B01B0 string=0x00000000002B01B4 "|"
 *   insn=0x00000000002B01B4 string=0x00000000002B01B8 "B"
 *   insn=0x00000000002B01BC string=0x00000000002B01C0 "*"
 *   insn=0x00000000002B01C0 string=0x00000000002B01C4 "\n"
 *   insn=0x00000000002B01D0 string=0x00000000002B01D4 "t"
 *   insn=0x00000000002B01D4 string=0x00000000002B01D8 "c"
 *   insn=0x00000000002B01DC string=0x00000000002B01E0 "*"
 *   insn=0x00000000002B01E0 string=0x00000000002B01E4 "\n"
 *   insn=0x00000000002B01E8 string=0x00000000002B01EC "L"
 *   insn=0x00000000002B01F0 string=0x00000000002B01F4 "l"
 *   insn=0x00000000002B01F4 string=0x00000000002B01F8 "_"
 *   insn=0x00000000002B01FC string=0x00000000002B0200 "*"
 *   insn=0x00000000002B0200 string=0x00000000002B0204 "\n"
 *   insn=0x00000000002B0208 string=0x00000000002B020C ","
 *   insn=0x00000000002B0210 string=0x00000000002B0214 "d"
 *   insn=0x00000000002B0214 string=0x00000000002B0218 "~"
 *   insn=0x00000000002B021C string=0x00000000002B0220 "*"
 *   insn=0x00000000002B0220 string=0x00000000002B0224 "\n"
 *   insn=0x00000000002B0230 string=0x00000000002B0234 "\"
 *   insn=0x00000000002B0234 string=0x00000000002B0238 "z"
 *   insn=0x00000000002B023C string=0x00000000002B0240 "*"
 *   insn=0x00000000002B0240 string=0x00000000002B0244 "\n"
 *   insn=0x00000000002B0250 string=0x00000000002B0254 "T"
 *   insn=0x00000000002B025C string=0x00000000002B0260 "*"
 *   insn=0x00000000002B0260 string=0x00000000002B0264 "\n"
 *   insn=0x00000000002B0270 string=0x00000000002B0274 "L"
 *   insn=0x00000000002B027C string=0x00000000002B0280 "*"
 *   insn=0x00000000002B0280 string=0x00000000002B0284 "\n"
 *   insn=0x00000000002B0290 string=0x00000000002B0294 "D"
 *   insn=0x00000000002B029C string=0x00000000002B02A0 "*"
 *   insn=0x00000000002B02A0 string=0x00000000002B02A4 "\n"
 *   insn=0x00000000002B02A8 string=0x00000000002B02AC "l"
 *   insn=0x00000000002B02B0 string=0x00000000002B02B4 "<"
 *   insn=0x00000000002B02BC string=0x00000000002B02C0 "*"
 *   insn=0x00000000002B02C0 string=0x00000000002B02C4 "\n"
 *   insn=0x00000000002B02C8 string=0x00000000002B02CC "L"
 *   insn=0x00000000002B02D0 string=0x00000000002B02D4 "4"
 *   insn=0x00000000002B02DC string=0x00000000002B02E0 "*"
 *   insn=0x00000000002B02E0 string=0x00000000002B02E4 "\n"
 *   insn=0x00000000002B02F0 string=0x00000000002B02F4 ","
 *   insn=0x00000000002B02FC string=0x00000000002B0300 "*"
 *   insn=0x00000000002B0300 string=0x00000000002B0304 "\n"
 *   insn=0x00000000002B0310 string=0x00000000002B0314 "$"
 *   insn=0x00000000002B031C string=0x00000000002B0320 "*"
 *   insn=0x00000000002B0320 string=0x00000000002B0324 "\n"
 *   insn=0x00000000002B0328 string=0x00000000002B032C ","
 *   insn=0x00000000002B033C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002B0344 string=0x00000000002B0348 "(a"
 *   insn=0x00000000002B0354 string=0x00000000002B0358 "J=G"
 *   insn=0x00000000002B0358 string=0x00000000002B035C ")!"
 *   insn=0x00000000002B0360 string=0x00000000002B0364 "*"
 *   insn=0x00000000002B0360 string=0x00000000002B0378 "*"
 *   insn=0x00000000002B0364 string=0x00000000002B0368 "K"
 *   insn=0x00000000002B0368 string=0x00000000002B036C "+"
 *   insn=0x00000000002B0374 string=0x00000000002B0384 "_"
 *   insn=0x00000000002B0378 string=0x00000000002B037C "K"
 *   insn=0x00000000002B037C string=0x00000000002B0380 "+"
 *   insn=0x00000000002B03A8 string=0x00000000002B03AC "`#"
 *   insn=0x00000000002B03B0 string=0x00000000002B03B4 ")=G"
 *   insn=0x00000000002B03B4 string=0x00000000002B03B8 "!"
 *   insn=0x00000000002B03B8 string=0x00000000002B03BC ")#"
 *   insn=0x00000000002B03BC string=0x00000000002B03C0 "\t"
 *   insn=0x00000000002B03BC string=0x00000000002B0820 "\t"
 *   insn=0x00000000002B03C0 string=0x00000000002B03C4 "*"
 *   insn=0x00000000002B03C4 string=0x00000000002B03C8 "\n"
 *   insn=0x00000000002B03D0 string=0x00000000002B0808 "?"
 *   insn=0x00000000002B03DC string=0x00000000002B03E0 "(a"
 *   insn=0x00000000002B03EC string=0x00000000002B03F0 "J=G"
 *   insn=0x00000000002B03F0 string=0x00000000002B03F4 ")!"
 *   insn=0x00000000002B03F8 string=0x00000000002B03FC "*"
 *   insn=0x00000000002B03F8 string=0x00000000002B0410 "*"
 *   insn=0x00000000002B03FC string=0x00000000002B0400 "K"
 *   insn=0x00000000002B0400 string=0x00000000002B0404 "+"
 *   insn=0x00000000002B040C string=0x00000000002B041C "_"
 *   insn=0x00000000002B0410 string=0x00000000002B0414 "K"
 *   insn=0x00000000002B0414 string=0x00000000002B0418 "+"
 *   insn=0x00000000002B0448 string=0x00000000002B044C ")=G"
 *   insn=0x00000000002B044C string=0x00000000002B0450 "!"
 *   insn=0x00000000002B0450 string=0x00000000002B0454 "i"
 *   insn=0x00000000002B0454 string=0x00000000002B0458 "\t"
 *   insn=0x00000000002B0458 string=0x00000000002B045C "*"
 *   insn=0x00000000002B045C string=0x00000000002B0460 "\n"
 *   insn=0x00000000002B0474 string=0x00000000002B0478 "(a"
 *   insn=0x00000000002B0484 string=0x00000000002B0488 "J=G"
 *   insn=0x00000000002B0488 string=0x00000000002B048C ")!"
 *   insn=0x00000000002B0490 string=0x00000000002B0494 "*"
 *   insn=0x00000000002B0490 string=0x00000000002B04A8 "*"
 *   insn=0x00000000002B0494 string=0x00000000002B0498 "K"
 *   insn=0x00000000002B0498 string=0x00000000002B049C "+"
 *   insn=0x00000000002B04A4 string=0x00000000002B04B4 "_"
 *   insn=0x00000000002B04A8 string=0x00000000002B04AC "K"
 *   insn=0x00000000002B04AC string=0x00000000002B04B0 "+"
 *   insn=0x00000000002B04E0 string=0x00000000002B04E4 ")=G"
 *   insn=0x00000000002B04E4 string=0x00000000002B04E8 "!"
 *   insn=0x00000000002B04EC string=0x00000000002B04F0 "\t"
 *   insn=0x00000000002B04F0 string=0x00000000002B04F4 "*"
 *   insn=0x00000000002B04F4 string=0x00000000002B04F8 "\n"
 *   insn=0x00000000002B050C string=0x00000000002B0510 "(a"
 *   insn=0x00000000002B051C string=0x00000000002B0520 "J=G"
 *   insn=0x00000000002B0520 string=0x00000000002B0524 ")!"
 *   insn=0x00000000002B0528 string=0x00000000002B052C "*"
 *   insn=0x00000000002B0528 string=0x00000000002B0540 "*"
 *   insn=0x00000000002B052C string=0x00000000002B0530 "K"
 *   insn=0x00000000002B0530 string=0x00000000002B0534 "+"
 *   insn=0x00000000002B053C string=0x00000000002B054C "_"
 *   insn=0x00000000002B0540 string=0x00000000002B0544 "K"
 *   insn=0x00000000002B0544 string=0x00000000002B0548 "+"
 *   insn=0x00000000002B0570 string=0x00000000002B0574 " "
 *   insn=0x00000000002B0578 string=0x00000000002B057C ")=G"
 *   insn=0x00000000002B057C string=0x00000000002B0580 "!"
 *   insn=0x00000000002B0584 string=0x00000000002B0588 "\t"
 *   insn=0x00000000002B0588 string=0x00000000002B058C "*"
 *   insn=0x00000000002B058C string=0x00000000002B0590 "\n"
 *   insn=0x00000000002B05A4 string=0x00000000002B05A8 "(a"
 *   insn=0x00000000002B05B4 string=0x00000000002B05B8 "J=G"
 *   insn=0x00000000002B05B8 string=0x00000000002B05BC ")!"
 *   insn=0x00000000002B05C0 string=0x00000000002B05C4 "*"
 *   insn=0x00000000002B05C0 string=0x00000000002B05D8 "*"
 *   insn=0x00000000002B05C4 string=0x00000000002B05C8 "K"
 *   insn=0x00000000002B05C8 string=0x00000000002B05CC "+"
 *   insn=0x00000000002B05D4 string=0x00000000002B05E4 "_"
 *   insn=0x00000000002B05D8 string=0x00000000002B05DC "K"
 *   insn=0x00000000002B05DC string=0x00000000002B05E0 "+"
 *   insn=0x00000000002B05F0 string=0x00000000002B05F4 "l"
 *   insn=0x00000000002B0608 string=0x00000000002B060C "`"
 *   insn=0x00000000002B0610 string=0x00000000002B0614 ")=G"
 *   insn=0x00000000002B0614 string=0x00000000002B0618 "!"
 *   insn=0x00000000002B0618 string=0x00000000002B061C ")"
 *   insn=0x00000000002B061C string=0x00000000002B0620 "\t"
 *   insn=0x00000000002B0620 string=0x00000000002B0624 "*"
 *   insn=0x00000000002B0624 string=0x00000000002B0628 "\n"
 *   insn=0x00000000002B062C string=0x00000000002B0630 "v"
 *   insn=0x00000000002B063C string=0x00000000002B0640 "(a"
 *   insn=0x00000000002B064C string=0x00000000002B0650 "J=G"
 *   insn=0x00000000002B0650 string=0x00000000002B0654 ")!"
 *   insn=0x00000000002B0658 string=0x00000000002B065C "*"
 *   insn=0x00000000002B0658 string=0x00000000002B0670 "*"
 *   insn=0x00000000002B065C string=0x00000000002B0660 "K"
 *   insn=0x00000000002B0660 string=0x00000000002B0664 "+"
 *   insn=0x00000000002B066C string=0x00000000002B067C "_"
 *   insn=0x00000000002B0670 string=0x00000000002B0674 "K"
 *   insn=0x00000000002B0674 string=0x00000000002B0678 "+"
 *   insn=0x00000000002B0688 string=0x00000000002B068C "F"
 *   insn=0x00000000002B06A8 string=0x00000000002B06AC ")=G"
 *   insn=0x00000000002B06AC string=0x00000000002B06B0 "!"
 *   insn=0x00000000002B06B0 string=0x00000000002B06B4 "i"
 *   insn=0x00000000002B06B4 string=0x00000000002B06B8 "\t"
 *   insn=0x00000000002B06B8 string=0x00000000002B06BC "*"
 *   insn=0x00000000002B06BC string=0x00000000002B06C0 "\n"
 *   insn=0x00000000002B06C4 string=0x00000000002B06C8 "P"
 *   insn=0x00000000002B06D4 string=0x00000000002B06D8 "(a"
 *   insn=0x00000000002B06E4 string=0x00000000002B06E8 "J=G"
 *   insn=0x00000000002B06E8 string=0x00000000002B06EC ")!"
 *   insn=0x00000000002B06F0 string=0x00000000002B06F4 "*"
 *   insn=0x00000000002B06F0 string=0x00000000002B0708 "*"
 *   insn=0x00000000002B06F4 string=0x00000000002B06F8 "K"
 *   insn=0x00000000002B06F8 string=0x00000000002B06FC "+"
 *   insn=0x00000000002B0704 string=0x00000000002B0714 "_"
 *   insn=0x00000000002B0708 string=0x00000000002B070C "K"
 *   insn=0x00000000002B070C string=0x00000000002B0710 "+"
 *   insn=0x00000000002B0720 string=0x00000000002B0724 " "
 *   insn=0x00000000002B0740 string=0x00000000002B0744 ")=G"
 *   insn=0x00000000002B0744 string=0x00000000002B0748 "!"
 *   insn=0x00000000002B074C string=0x00000000002B0750 "\t"
 *   insn=0x00000000002B0750 string=0x00000000002B0754 "*"
 *   insn=0x00000000002B0754 string=0x00000000002B0758 "\n"
 *   insn=0x00000000002B075C string=0x00000000002B0760 "*"
 *   insn=0x00000000002B076C string=0x00000000002B0770 "J"
 *   insn=0x00000000002B0774 string=0x00000000002B0778 "(a"
 *   insn=0x00000000002B0784 string=0x00000000002B0788 "J=G"
 *   insn=0x00000000002B0788 string=0x00000000002B078C ")!"
 *   insn=0x00000000002B0790 string=0x00000000002B0794 "*"
 *   insn=0x00000000002B0790 string=0x00000000002B07A8 "*"
 *   insn=0x00000000002B0794 string=0x00000000002B0798 "K"
 *   insn=0x00000000002B0798 string=0x00000000002B079C "+"
 *   insn=0x00000000002B07A4 string=0x00000000002B07B4 "_"
 *   insn=0x00000000002B07A8 string=0x00000000002B07AC "K"
 *   insn=0x00000000002B07AC string=0x00000000002B07B0 "+"
 *   insn=0x00000000002B07D4 string=0x00000000002B07D8 ")"
 *   insn=0x00000000002B07E8 string=0x00000000002B07EC ")=G"
 *   insn=0x00000000002B07EC string=0x00000000002B07F0 "!"
 *   insn=0x00000000002B07F0 string=0x00000000002B07F4 "i"
 *   insn=0x00000000002B07F4 string=0x00000000002B07F8 "\t"
 *   insn=0x00000000002B07F8 string=0x00000000002B07FC "*"
 *   insn=0x00000000002B07FC string=0x00000000002B0800 "\n"
 *   insn=0x00000000002B0808 string=0x00000000002B080C "l"
 *   insn=0x00000000002B0818 string=0x00000000002B081C "*D"
 *   insn=0x00000000002B0820 string=0x00000000002B0824 "*"
 *   insn=0x00000000002B0824 string=0x00000000002B0828 "\n"
 *   insn=0x00000000002B0828 string=0x00000000002B082C "?"
 *   insn=0x00000000002B082C string=0x00000000002B0830 ""
 *   insn=0x00000000002B0840 string=0x00000000001F9F00 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SimpleGlowComponent::GetBindings(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  void *v4; // x0
  void *v5; // x0
  __int64 v6; // x20
  void *v7; // x0
  void *v8; // x0
  __int64 v9; // x20
  void *v10; // x0
  void *v11; // x0
  __int64 v12; // x20
  void *v13; // x0
  void *v14; // x0
  __int64 v15; // x20
  void *v16; // x0
  void *v17; // x0
  __int64 v18; // x20
  void *v19; // x0
  void *v20; // x0
  __int64 v21; // x20
  void *v22; // x0
  void *v23; // x0
  __int64 v24; // x20
  void *v25; // x0
  void *v26; // x0
  unsigned int *v27; // x8
  int v28; // w9
  unsigned int *v29; // x8
  int v30; // w9
  unsigned int *v31; // x8
  int v32; // w9
  unsigned int *v33; // x8
  int v34; // w9
  unsigned int *v35; // x8
  int v36; // w9
  unsigned int *v37; // x8
  int v38; // w9
  unsigned int *v39; // x8
  int v40; // w9
  unsigned int *v41; // x8
  int v42; // w9
  unsigned int *v43; // x8
  int v44; // w9
  unsigned int *v45; // x8
  int v46; // w9
  unsigned int *v47; // x8
  int v48; // w9
  unsigned int *v49; // x8
  int v50; // w9
  unsigned int *v51; // x8
  int v52; // w9
  unsigned int *v53; // x8
  int v54; // w9
  unsigned int *v55; // x8
  int v56; // w9
  unsigned int *v57; // x8
  int v58; // w9
  __int64 v59; // [xsp+8h] [xbp-78h] BYREF
  int v60; // [xsp+18h] [xbp-68h]
  __int64 v61; // [xsp+20h] [xbp-60h] BYREF
  __int64 v62; // [xsp+28h] [xbp-58h]
  int v63; // [xsp+30h] [xbp-50h]
  __int64 v64; // [xsp+38h] [xbp-48h]

  v64 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GlowComponent::GetBindings();
  sub_566BB8((int)&v59, "color");
  v60 = 100;
  sub_56A528(&v61, &v59);
  v63 = 0;
  v62 = 0x700000001LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v3 = v60;
    sub_56A528(v3 + 8, &v61);
    *(_DWORD *)(v3 + 24) = v63;
    *(_QWORD *)(v3 + 16) = v62;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v4 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    v27 = (unsigned int *)(v61 - 8);
    if ( &pthread_create )
    {
      do
        v28 = __ldaxr(v27);
      while ( __stlxr(v28 - 1, v27) );
    }
    else
    {
      v28 = (*v27)--;
    }
    if ( v28 <= 0 )
      operator delete(v4);
  }
  v5 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    v29 = (unsigned int *)(v59 - 8);
    if ( &pthread_create )
    {
      do
        v30 = __ldaxr(v29);
      while ( __stlxr(v30 - 1, v29) );
    }
    else
    {
      v30 = (*v29)--;
    }
    if ( v30 <= 0 )
      operator delete(v5);
  }
  sub_566BB8((int)&v59, "size");
  v60 = 101;
  sub_56A528(&v61, &v59);
  v63 = 0;
  v62 = 0x500000001LL;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v6 = v60;
    sub_56A528(v6 + 8, &v61);
    *(_DWORD *)(v6 + 24) = v63;
    *(_QWORD *)(v6 + 16) = v62;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v7 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    v31 = (unsigned int *)(v61 - 8);
    if ( &pthread_create )
    {
      do
        v32 = __ldaxr(v31);
      while ( __stlxr(v32 - 1, v31) );
    }
    else
    {
      v32 = (*v31)--;
    }
    if ( v32 <= 0 )
      operator delete(v7);
  }
  v8 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    v33 = (unsigned int *)(v59 - 8);
    if ( &pthread_create )
    {
      do
        v34 = __ldaxr(v33);
      while ( __stlxr(v34 - 1, v33) );
    }
    else
    {
      v34 = (*v33)--;
    }
    if ( v34 <= 0 )
      operator delete(v8);
  }
  sub_566BB8((int)&v59, "numSegments");
  v60 = 102;
  sub_56A528(&v61, &v59);
  v63 = 0;
  v62 = 0x200000001LL;
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v9 = v60;
    sub_56A528(v9 + 8, &v61);
    *(_DWORD *)(v9 + 24) = v63;
    *(_QWORD *)(v9 + 16) = v62;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v10 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    v35 = (unsigned int *)(v61 - 8);
    if ( &pthread_create )
    {
      do
        v36 = __ldaxr(v35);
      while ( __stlxr(v36 - 1, v35) );
    }
    else
    {
      v36 = (*v35)--;
    }
    if ( v36 <= 0 )
      operator delete(v10);
  }
  v11 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    v37 = (unsigned int *)(v59 - 8);
    if ( &pthread_create )
    {
      do
        v38 = __ldaxr(v37);
      while ( __stlxr(v38 - 1, v37) );
    }
    else
    {
      v38 = (*v37)--;
    }
    if ( v38 <= 0 )
      operator delete(v11);
  }
  sub_566BB8((int)&v59, "depth");
  v60 = 103;
  sub_56A528(&v61, &v59);
  v62 = 0x500000001LL;
  v63 = 0;
  v12 = *(_QWORD *)(a2 + 8);
  if ( v12 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v12 = v60;
    sub_56A528(v12 + 8, &v61);
    *(_DWORD *)(v12 + 24) = v63;
    *(_QWORD *)(v12 + 16) = v62;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v13 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    v39 = (unsigned int *)(v61 - 8);
    if ( &pthread_create )
    {
      do
        v40 = __ldaxr(v39);
      while ( __stlxr(v40 - 1, v39) );
    }
    else
    {
      v40 = (*v39)--;
    }
    if ( v40 <= 0 )
      operator delete(v13);
  }
  v14 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    v41 = (unsigned int *)(v59 - 8);
    if ( &pthread_create )
    {
      do
        v42 = __ldaxr(v41);
      while ( __stlxr(v42 - 1, v41) );
    }
    else
    {
      v42 = (*v41)--;
    }
    if ( v42 <= 0 )
      operator delete(v14);
  }
  sub_566BB8((int)&v59, "offsetX");
  v60 = 104;
  sub_56A528(&v61, &v59);
  v62 = 0x500000001LL;
  v63 = 0;
  v15 = *(_QWORD *)(a2 + 8);
  if ( v15 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v15 = v60;
    sub_56A528(v15 + 8, &v61);
    *(_DWORD *)(v15 + 24) = v63;
    *(_QWORD *)(v15 + 16) = v62;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v16 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    v43 = (unsigned int *)(v61 - 8);
    if ( &pthread_create )
    {
      do
        v44 = __ldaxr(v43);
      while ( __stlxr(v44 - 1, v43) );
    }
    else
    {
      v44 = (*v43)--;
    }
    if ( v44 <= 0 )
      operator delete(v16);
  }
  v17 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    v45 = (unsigned int *)(v59 - 8);
    if ( &pthread_create )
    {
      do
        v46 = __ldaxr(v45);
      while ( __stlxr(v46 - 1, v45) );
    }
    else
    {
      v46 = (*v45)--;
    }
    if ( v46 <= 0 )
      operator delete(v17);
  }
  sub_566BB8((int)&v59, "offsetY");
  v60 = 105;
  sub_56A528(&v61, &v59);
  v62 = 0x500000001LL;
  v63 = 0;
  v18 = *(_QWORD *)(a2 + 8);
  if ( v18 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v18 = v60;
    sub_56A528(v18 + 8, &v61);
    *(_DWORD *)(v18 + 24) = v63;
    *(_QWORD *)(v18 + 16) = v62;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v19 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    v47 = (unsigned int *)(v61 - 8);
    if ( &pthread_create )
    {
      do
        v48 = __ldaxr(v47);
      while ( __stlxr(v48 - 1, v47) );
    }
    else
    {
      v48 = (*v47)--;
    }
    if ( v48 <= 0 )
      operator delete(v19);
  }
  v20 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    v49 = (unsigned int *)(v59 - 8);
    if ( &pthread_create )
    {
      do
        v50 = __ldaxr(v49);
      while ( __stlxr(v50 - 1, v49) );
    }
    else
    {
      v50 = (*v49)--;
    }
    if ( v50 <= 0 )
      operator delete(v20);
  }
  sub_566BB8((int)&v59, "pulseAmount");
  v60 = 106;
  sub_56A528(&v61, &v59);
  v62 = 0x500000001LL;
  v63 = 0;
  v21 = *(_QWORD *)(a2 + 8);
  if ( v21 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v21 = v60;
    sub_56A528(v21 + 8, &v61);
    *(_DWORD *)(v21 + 24) = v63;
    *(_QWORD *)(v21 + 16) = v62;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v22 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    v51 = (unsigned int *)(v61 - 8);
    if ( &pthread_create )
    {
      do
        v52 = __ldaxr(v51);
      while ( __stlxr(v52 - 1, v51) );
    }
    else
    {
      v52 = (*v51)--;
    }
    if ( v52 <= 0 )
      operator delete(v22);
  }
  v23 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    v53 = (unsigned int *)(v59 - 8);
    if ( &pthread_create )
    {
      do
        v54 = __ldaxr(v53);
      while ( __stlxr(v54 - 1, v53) );
    }
    else
    {
      v54 = (*v53)--;
    }
    if ( v54 <= 0 )
      operator delete(v23);
  }
  sub_566BB8((int)&v59, "pulseTime");
  v60 = 107;
  sub_56A528(&v61, &v59);
  v62 = 0x500000001LL;
  v63 = 0;
  v24 = *(_QWORD *)(a2 + 8);
  if ( v24 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v24 = v60;
    sub_56A528(v24 + 8, &v61);
    *(_DWORD *)(v24 + 24) = v63;
    *(_QWORD *)(v24 + 16) = v62;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v25 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    v55 = (unsigned int *)(v61 - 8);
    if ( &pthread_create )
    {
      do
        v56 = __ldaxr(v55);
      while ( __stlxr(v56 - 1, v55) );
    }
    else
    {
      v56 = (*v55)--;
    }
    if ( v56 <= 0 )
      operator delete(v25);
  }
  v26 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    v57 = (unsigned int *)(v59 - 8);
    if ( &pthread_create )
    {
      do
        v58 = __ldaxr(v57);
      while ( __stlxr(v58 - 1, v57) );
    }
    else
    {
      v58 = (*v57)--;
    }
    if ( v58 <= 0 )
      operator delete(v26);
  }
}

