/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000444C48
 * Mangled: _ZNK5Caver4Mesh21SaveToProtobufMessageEPNS_5Proto4MeshE
 * Demangled: Caver::Mesh::SaveToProtobufMessage(Caver::Proto::Mesh *)
 *
 * Callers: 1
 *   0x0000000000202D10  Caver::Mesh::SaveToProtobufMessage(Caver::Proto::Mesh *)
 *
 * Callees: 17
 *   0x00000000001F3BB0  Caver::Proto::MeshMaterial::MeshMaterial(void)
 *   0x00000000001F4ED0  Caver::MeshMaterial::SaveToProtobufMessage(Caver::Proto::MeshMaterial *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6A80  std::vector<Caver::MeshData const*,std::allocator<Caver::MeshData const*>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MeshData const**,std::vector<Caver::MeshData const*,std::allocator<Caver::MeshData const*>>>,Caver::MeshData const* const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FB1D0  Caver::SizeOfDataType(Caver::DataType)
 *   0x00000000001FB860  Caver::CopyToFileBuffer8(uchar *,uchar const*,int)
 *   0x00000000001FCA50  Caver::Proto::MeshData::MeshData(void)
 *   0x00000000001FD8F0  Caver::CopyToFileBuffer16(uchar *,uchar const*,int)
 *   0x00000000001FDA50  Caver::Proto::Box::Box(void)
 *   0x00000000001FDE10  Caver::CopyToFileBuffer32(uchar *,uchar const*,int)
 *   0x00000000004456D0  Caver::Mesh::GetDataStructs(Caver::MeshData **,int *)
 *   0x0000000000568EA8  sub_568EA8
 *   0x0000000000569650  sub_569650
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 249
 *   insn=0x0000000000444C64 string=0x0000000000444C68 "H"
 *   insn=0x0000000000444C6C string=0x0000000000444C70 ""
 *   insn=0x0000000000444C80 string=0x0000000000444C84 "i"
 *   insn=0x0000000000444C88 string=0x0000000000444C8C "\n"
 *   insn=0x0000000000444C94 string=0x0000000000444C98 "i"
 *   insn=0x0000000000444C98 string=0x0000000000444C9C "j@"
 *   insn=0x0000000000444C9C string=0x0000000000444CA0 ""
 *   insn=0x0000000000444CAC string=0x0000000000444CC4 "`"
 *   insn=0x0000000000444CB0 string=0x0000000000444CB4 "K"
 *   insn=0x0000000000444CB4 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000444CBC string=0x00000000001F3BB0 "P'"
 *   insn=0x0000000000444CCC string=0x0000000000444CD0 "h"
 *   insn=0x0000000000444CCC string=0x00000000001F4ED0 "P'"
 *   insn=0x0000000000444CD4 string=0x0000000000444CD8 "k"
 *   insn=0x0000000000444CD8 string=0x0000000000444E84 "w"
 *   insn=0x0000000000444CE0 string=0x0000000000444CE4 ""
 *   insn=0x0000000000444CEC string=0x0000000000444D04 "i\n@"
 *   insn=0x0000000000444CF0 string=0x0000000000444CF4 ";"
 *   insn=0x0000000000444CF8 string=0x0000000000444CFC "U"
 *   insn=0x0000000000444CFC string=0x00000000001FCA50 "0'"
 *   insn=0x0000000000444D04 string=0x0000000000444D08 "h"
 *   insn=0x0000000000444D0C string=0x0000000000444D10 "*"
 *   insn=0x0000000000444D10 string=0x0000000000444D14 "_"
 *   insn=0x0000000000444D20 string=0x0000000000444D24 "+"
 *   insn=0x0000000000444D28 string=0x0000000000444D2C "I"
 *   insn=0x0000000000444D34 string=0x0000000000444D3C "j"
 *   insn=0x0000000000444D3C string=0x0000000000444D40 "+"
 *   insn=0x0000000000444D44 string=0x0000000000444D48 "+"
 *   insn=0x0000000000444D4C string=0x0000000000444D50 "j"
 *   insn=0x0000000000444D5C string=0x0000000000444D60 "j"
 *   insn=0x0000000000444D5C string=0x0000000000444D70 "h"
 *   insn=0x0000000000444D64 string=0x0000000000444D68 "H"
 *   insn=0x0000000000444D6C string=0x0000000000444D74 ")\t"
 *   insn=0x0000000000444D88 string=0x0000000000444D8C ""
 *   insn=0x0000000000444D98 string=0x0000000000444DB8 "a"
 *   insn=0x0000000000444DA0 string=0x0000000000444DA4 ""
 *   insn=0x0000000000444DA4 string=0x0000000000444DA8 ""
 *   insn=0x0000000000444DA8 string=0x0000000000444DAC "a"
 *   insn=0x0000000000444DAC string=0x0000000000444DB0 ""
 *   insn=0x0000000000444DBC string=0x0000000000444DC0 "$"
 *   insn=0x0000000000444DC8 string=0x0000000000444DCC "u"
 *   insn=0x0000000000444DCC string=0x0000000000444DD0 ""
 *   insn=0x0000000000444DD8 string=0x0000000000444DDC "!"
 *   insn=0x0000000000444DE4 string=0x0000000000444DE8 ""
 *   insn=0x0000000000444DE8 string=0x0000000000444DEC ""
 *   insn=0x0000000000444DF0 string=0x0000000000444DF4 "a"
 *   insn=0x0000000000444E08 string=0x0000000000444E18 "`\n@"
 *   insn=0x0000000000444E0C string=0x0000000000444E10 "&"
 *   insn=0x0000000000444E18 string=0x0000000000444E1C "w"
 *   insn=0x0000000000444E20 string=0x0000000000444E24 "h\n@"
 *   insn=0x0000000000444E20 string=0x00000000001FB1D0 "0'"
 *   insn=0x0000000000444E58 string=0x0000000000444E5C "\n"
 *   insn=0x0000000000444E58 string=0x00000000001FB860 "0'"
 *   insn=0x0000000000444E6C string=0x00000000001FD8F0 "0'"
 *   insn=0x0000000000444E80 string=0x00000000001FDE10 "0'"
 *   insn=0x0000000000444E8C string=0x0000000000444E90 "h&@"
 *   insn=0x0000000000444E98 string=0x0000000000444F70 "h>@"
 *   insn=0x0000000000444EA0 string=0x0000000000444EA4 ""
 *   insn=0x0000000000444EAC string=0x0000000000444EC8 "h"
 *   insn=0x0000000000444EC8 string=0x0000000000444ECC "\t"
 *   insn=0x0000000000444ED0 string=0x0000000000444ED4 "*"
 *   insn=0x0000000000444ED4 string=0x0000000000444ED8 "_"
 *   insn=0x0000000000444EE4 string=0x0000000000444EE8 "+"
 *   insn=0x0000000000444EEC string=0x0000000000444EF0 "I"
 *   insn=0x0000000000444EF8 string=0x0000000000444F00 "j&@"
 *   insn=0x0000000000444F00 string=0x0000000000444F04 "+"
 *   insn=0x0000000000444F08 string=0x0000000000444F0C "+"
 *   insn=0x0000000000444F10 string=0x0000000000444F14 "j*@"
 *   insn=0x0000000000444F20 string=0x0000000000444F24 "j"
 *   insn=0x0000000000444F20 string=0x0000000000444F34 "j"
 *   insn=0x0000000000444F28 string=0x0000000000444F2C "J"
 *   insn=0x0000000000444F30 string=0x0000000000444F38 ")\t"
 *   insn=0x0000000000444F44 string=0x0000000000444F48 "?"
 *   insn=0x0000000000444F4C string=0x0000000000444F50 "("
 *   insn=0x0000000000444F54 string=0x0000000000444F58 "!"
 *   insn=0x0000000000444F6C string=0x00000000001F6A80 "0'"
 *   insn=0x0000000000444F78 string=0x0000000000445050 "h^@"
 *   insn=0x0000000000444F80 string=0x0000000000444F84 ""
 *   insn=0x0000000000444F8C string=0x0000000000444FA8 "h"
 *   insn=0x0000000000444FA8 string=0x0000000000444FAC "\t"
 *   insn=0x0000000000444FB0 string=0x0000000000444FB4 "*"
 *   insn=0x0000000000444FB4 string=0x0000000000444FB8 "_"
 *   insn=0x0000000000444FC4 string=0x0000000000444FC8 "+"
 *   insn=0x0000000000444FCC string=0x0000000000444FD0 "I"
 *   insn=0x0000000000444FD8 string=0x0000000000444FE0 "j>@"
 *   insn=0x0000000000444FE0 string=0x0000000000444FE4 "+"
 *   insn=0x0000000000444FE8 string=0x0000000000444FEC "+"
 *   insn=0x0000000000444FF0 string=0x0000000000444FF4 "jB@"
 *   insn=0x0000000000445000 string=0x0000000000445004 "j&@"
 *   insn=0x0000000000445000 string=0x0000000000445014 "j&@"
 *   insn=0x0000000000445008 string=0x000000000044500C "J"
 *   insn=0x0000000000445010 string=0x0000000000445018 ")\t"
 *   insn=0x0000000000445024 string=0x0000000000445028 "?"
 *   insn=0x000000000044502C string=0x0000000000445030 "("
 *   insn=0x0000000000445034 string=0x0000000000445038 "!"
 *   insn=0x0000000000445058 string=0x0000000000445130 "hv@"
 *   insn=0x0000000000445060 string=0x0000000000445064 ""
 *   insn=0x000000000044506C string=0x0000000000445088 "hb"
 *   insn=0x0000000000445070 string=0x0000000000445074 "["
 *   insn=0x000000000044507C string=0x0000000000445080 "t"
 *   insn=0x0000000000445088 string=0x000000000044508C "\t"
 *   insn=0x0000000000445090 string=0x0000000000445094 "*"
 *   insn=0x0000000000445094 string=0x0000000000445098 "_"
 *   insn=0x00000000004450A4 string=0x00000000004450A8 "+"
 *   insn=0x00000000004450AC string=0x00000000004450B0 "I"
 *   insn=0x00000000004450B8 string=0x00000000004450C0 "j^@"
 *   insn=0x00000000004450C0 string=0x00000000004450C4 "+"
 *   insn=0x00000000004450C8 string=0x00000000004450CC "+"
 *   insn=0x00000000004450D0 string=0x00000000004450D4 "jb@"
 *   insn=0x00000000004450E0 string=0x00000000004450E4 "j6@"
 *   insn=0x00000000004450E0 string=0x00000000004450F4 "j6@"
 *   insn=0x00000000004450E8 string=0x00000000004450EC "J"
 *   insn=0x00000000004450F0 string=0x00000000004450F8 ")\t"
 *   insn=0x0000000000445104 string=0x0000000000445108 "?"
 *   insn=0x000000000044510C string=0x0000000000445110 "("
 *   insn=0x0000000000445114 string=0x0000000000445118 "!"
 *   insn=0x0000000000445128 string=0x000000000044512C "U"
 *   insn=0x0000000000445138 string=0x0000000000445210 "h"
 *   insn=0x0000000000445140 string=0x0000000000445144 ""
 *   insn=0x000000000044514C string=0x0000000000445168 "h"
 *   insn=0x0000000000445150 string=0x0000000000445154 "#"
 *   insn=0x000000000044515C string=0x0000000000445160 "<"
 *   insn=0x0000000000445168 string=0x000000000044516C "\t"
 *   insn=0x0000000000445170 string=0x0000000000445174 "*"
 *   insn=0x0000000000445174 string=0x0000000000445178 "_"
 *   insn=0x0000000000445184 string=0x0000000000445188 "+"
 *   insn=0x000000000044518C string=0x0000000000445190 "I"
 *   insn=0x0000000000445198 string=0x00000000004451A0 "jv@"
 *   insn=0x00000000004451A0 string=0x00000000004451A4 "+"
 *   insn=0x00000000004451A8 string=0x00000000004451AC "+"
 *   insn=0x00000000004451B0 string=0x00000000004451B4 "jz@"
 *   insn=0x00000000004451C0 string=0x00000000004451C4 "jB@"
 *   insn=0x00000000004451C0 string=0x00000000004451D4 "jB@"
 *   insn=0x00000000004451C8 string=0x00000000004451CC "J"
 *   insn=0x00000000004451D0 string=0x00000000004451D8 ")\t"
 *   insn=0x00000000004451E4 string=0x00000000004451E8 "?"
 *   insn=0x00000000004451EC string=0x00000000004451F0 "("
 *   insn=0x00000000004451F4 string=0x00000000004451F8 "!"
 *   insn=0x0000000000445218 string=0x00000000004452F0 "hBA"
 *   insn=0x0000000000445220 string=0x0000000000445224 ""
 *   insn=0x000000000044522C string=0x0000000000445248 "h""
 *   insn=0x0000000000445248 string=0x000000000044524C "\t"
 *   insn=0x0000000000445250 string=0x0000000000445254 "*"
 *   insn=0x0000000000445254 string=0x0000000000445258 "_"
 *   insn=0x0000000000445264 string=0x0000000000445268 "+"
 *   insn=0x000000000044526C string=0x0000000000445270 "I"
 *   insn=0x0000000000445278 string=0x0000000000445280 "j"
 *   insn=0x0000000000445280 string=0x0000000000445284 "+"
 *   insn=0x0000000000445288 string=0x000000000044528C "+"
 *   insn=0x0000000000445290 string=0x0000000000445294 "j"
 *   insn=0x00000000004452A0 string=0x00000000004452A4 "jN@"
 *   insn=0x00000000004452A0 string=0x00000000004452B4 "jN@"
 *   insn=0x00000000004452A8 string=0x00000000004452AC "J"
 *   insn=0x00000000004452B0 string=0x00000000004452B8 ")\t"
 *   insn=0x00000000004452C4 string=0x00000000004452C8 "?"
 *   insn=0x00000000004452CC string=0x00000000004452D0 "("
 *   insn=0x00000000004452D4 string=0x00000000004452D8 "!"
 *   insn=0x00000000004452F4 string=0x00000000004452F8 "K\n"
 *   insn=0x00000000004452F8 string=0x0000000000445440 "\t"
 *   insn=0x0000000000445310 string=0x0000000000445314 "x*@"
 *   insn=0x0000000000445314 string=0x0000000000445318 ")}@"
 *   insn=0x0000000000445318 string=0x000000000044531C "?"
 *   insn=0x0000000000445324 string=0x0000000000445328 "*"
 *   insn=0x0000000000445334 string=0x0000000000445384 "ky"
 *   insn=0x0000000000445340 string=0x0000000000445354 ""
 *   insn=0x0000000000445348 string=0x000000000044534C "u"
 *   insn=0x000000000044534C string=0x00000000001FAD20 "0'"
 *   insn=0x0000000000445374 string=0x0000000000445378 "\n"
 *   insn=0x000000000044537C string=0x0000000000445380 "6y("
 *   insn=0x0000000000445384 string=0x0000000000445388 "\t"
 *   insn=0x0000000000445388 string=0x000000000044538C "?"
 *   insn=0x0000000000445394 string=0x0000000000445398 "\n"
 *   insn=0x000000000044539C string=0x00000000004453A0 "("
 *   insn=0x00000000004453A8 string=0x00000000004453B0 "\t"
 *   insn=0x00000000004453B0 string=0x00000000004453B4 "*"
 *   insn=0x00000000004453B4 string=0x00000000004453B8 ""
 *   insn=0x00000000004453BC string=0x00000000004453C0 ""
 *   insn=0x00000000004453C4 string=0x00000000004453C8 "*\t@"
 *   insn=0x00000000004453D4 string=0x00000000004453D8 ")\t@"
 *   insn=0x00000000004453D4 string=0x00000000004453E8 ")\t@"
 *   insn=0x00000000004453DC string=0x00000000004453E0 ")"
 *   insn=0x00000000004453DC string=0x00000000004453F4 "h*@"
 *   insn=0x00000000004453E4 string=0x00000000004453EC "\t"
 *   insn=0x00000000004453F8 string=0x00000000004453FC ""
 *   insn=0x00000000004453FC string=0x0000000000445400 "?"
 *   insn=0x0000000000445408 string=0x000000000044540C "("
 *   insn=0x0000000000445410 string=0x0000000000445414 "!"
 *   insn=0x000000000044541C string=0x000000000044542C "hB"
 *   insn=0x000000000044542C string=0x0000000000445430 "Z"
 *   insn=0x0000000000445430 string=0x0000000000445434 "9c"
 *   insn=0x0000000000445434 string=0x0000000000445438 "_"
 *   insn=0x0000000000445448 string=0x000000000044544C ")qE"
 *   insn=0x000000000044544C string=0x0000000000445450 ""
 *   insn=0x000000000044545C string=0x000000000044547C "a\n"
 *   insn=0x0000000000445460 string=0x0000000000445464 "_"
 *   insn=0x0000000000445464 string=0x0000000000445468 ""
 *   insn=0x0000000000445468 string=0x000000000044546C ""
 *   insn=0x000000000044546C string=0x0000000000445470 "a"
 *   insn=0x0000000000445470 string=0x0000000000445474 ""
 *   insn=0x0000000000445480 string=0x0000000000445484 "s"
 *   insn=0x0000000000445488 string=0x000000000044548C "?"
 *   insn=0x0000000000445494 string=0x0000000000445498 ""
 *   insn=0x0000000000445498 string=0x000000000044549C ""
 *   insn=0x000000000044549C string=0x00000000004454A0 "a"
 *   insn=0x00000000004454A4 string=0x00000000004454A8 "8"
 *   insn=0x00000000004454A8 string=0x00000000004454AC "\t"
 *   insn=0x00000000004454B8 string=0x00000000004454BC ")qE"
 *   insn=0x00000000004454BC string=0x00000000004454C0 ""
 *   insn=0x00000000004454C8 string=0x00000000004454CC "`"
 *   insn=0x00000000004454D0 string=0x00000000004454D4 ""
 *   insn=0x00000000004454D8 string=0x00000000004454DC "A"
 *   insn=0x00000000004454F4 string=0x00000000004454F8 "w"
 *   insn=0x00000000004454F8 string=0x00000000004454FC "H"
 *   insn=0x0000000000445504 string=0x0000000000445508 "h"
 *   insn=0x0000000000445510 string=0x0000000000445514 "/"
 *   insn=0x0000000000445518 string=0x000000000044551C "h"
 *   insn=0x000000000044552C string=0x0000000000445530 ""
 *   insn=0x000000000044553C string=0x0000000000445540 "Z"
 *   insn=0x0000000000445540 string=0x0000000000445544 "@"
 *   insn=0x000000000044554C string=0x0000000000445550 "`"
 *   insn=0x000000000044555C string=0x0000000000445560 "!"
 *   insn=0x0000000000445560 string=0x0000000000445584 "h"
 *   insn=0x000000000044557C string=0x0000000000445580 "$"
 *   insn=0x0000000000445588 string=0x000000000044558C "{"
 *   insn=0x0000000000445598 string=0x000000000044559C "9#"
 *   insn=0x000000000044559C string=0x00000000004455A0 "?"
 *   insn=0x00000000004455A0 string=0x00000000004455A4 "!"
 *   insn=0x00000000004455AC string=0x00000000004455B0 ""
 *   insn=0x00000000004455B8 string=0x00000000004455D4 "h"
 *   insn=0x00000000004455BC string=0x00000000004455C0 ""
 *   insn=0x00000000004455C8 string=0x00000000004455CC "!"
 *   insn=0x00000000004455CC string=0x00000000001FDA50 "0'"
 *   insn=0x00000000004455D4 string=0x00000000004455D8 ""
 *   insn=0x00000000004455D8 string=0x00000000004455DC "i2"
 *   insn=0x00000000004455E0 string=0x00000000004455E4 "("
 *   insn=0x00000000004455EC string=0x00000000004455F0 "hR"
 *   insn=0x00000000004455F0 string=0x00000000004455F4 ""
 *   insn=0x00000000004455F4 string=0x00000000004455F8 ")"
 *   insn=0x0000000000445604 string=0x0000000000445608 "@"
 *   insn=0x0000000000445608 string=0x000000000044560C ")"
 *   insn=0x000000000044560C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000445610 string=0x0000000000445614 ""
 *   insn=0x000000000044561C string=0x0000000000445620 "!"
 *   insn=0x0000000000445620 string=0x0000000000445644 "#"
 *   insn=0x0000000000445644 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000445674 string=0x0000000000445678 ""
 *   insn=0x00000000004456BC string=0x00000000004456C0 "@"
 *   insn=0x00000000004456C8 string=0x00000000004456CC "~"
 *   insn=0x00000000004456CC string=0x00000000004456D0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Mesh::SaveToProtobufMessage(Caver::Mesh *this, Caver::Proto::Mesh *a2)
{
  int v4; // w8
  Caver::Proto::MeshMaterial *v5; // x21
  int v6; // w9
  Caver::Proto::MeshData *v7; // x21
  int v8; // w9
  __int64 v9; // x8
  int v10; // w10
  int v11; // w9
  int v12; // w10
  int v13; // w10
  __int64 v14; // x10
  __int64 *v15; // x0
  _QWORD *v16; // x0
  __int64 *v17; // x23
  unsigned __int8 *v18; // x21
  Caver *v19; // x22
  int v20; // w23
  unsigned int v21; // w23
  int v22; // w0
  int v23; // w3
  __int64 v24; // x23
  Caver::Proto::MeshData *v25; // x21
  int v26; // w9
  int v27; // w10
  int v28; // w9
  int v29; // w10
  int v30; // w10
  __int64 v31; // x10
  Caver::Proto::MeshData *v32; // x21
  int v33; // w9
  int v34; // w10
  int v35; // w9
  int v36; // w10
  int v37; // w10
  __int64 v38; // x10
  Caver::Proto::MeshData *v39; // x21
  int v40; // w9
  int v41; // w10
  int v42; // w9
  int v43; // w10
  int v44; // w10
  __int64 v45; // x10
  Caver::Proto::MeshData *v46; // x21
  int v47; // w9
  int v48; // w10
  int v49; // w9
  int v50; // w10
  int v51; // w10
  __int64 v52; // x10
  Caver::Proto::MeshData *v53; // x21
  int v54; // w9
  int v55; // w10
  int v56; // w9
  int v57; // w10
  int v58; // w10
  __int64 v59; // x10
  __int64 v60; // x25
  __int64 v61; // x26
  int v62; // w8
  __int64 v63; // x24
  __int64 v64; // x9
  __int64 v65; // x8
  Caver::Proto::MeshData *v66; // x22
  __int64 v67; // x8
  __int64 v68; // x9
  int v69; // w8
  int v70; // w9
  int v71; // w8
  __int64 v72; // x9
  int v73; // w10
  int v74; // w10
  __int64 v75; // x9
  __int64 *v76; // x0
  _QWORD *v77; // x0
  char *v78; // x25
  __int64 v79; // x24
  __int64 *v80; // x21
  __int64 v81; // x28
  __int64 v82; // x22
  __int64 v83; // x26
  __int64 v84; // x23
  int v85; // w3
  int v86; // w21
  __int64 v87; // x8
  unsigned int v88; // w22
  __int64 v89; // x8
  __int64 v90; // x27
  unsigned int v91; // w23
  __int64 v92; // x24
  __int64 v93; // x26
  Caver *v94; // x0
  unsigned __int8 *v95; // x1
  __int64 v96; // x21
  int v97; // w9
  __int64 v98; // x8
  char *v99; // [xsp+10h] [xbp-80h]
  void *p; // [xsp+20h] [xbp-70h] BYREF
  char *v101; // [xsp+28h] [xbp-68h]
  char *v102; // [xsp+30h] [xbp-60h]
  __int64 v103; // [xsp+38h] [xbp-58h]

  v103 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *((_DWORD *)a2 + 40);
  v5 = (Caver::Proto::MeshMaterial *)*((_QWORD *)a2 + 16);
  *((_DWORD *)a2 + 3) = *(_DWORD *)this;
  *((_DWORD *)a2 + 40) = v4 | 1;
  v6 = *((_DWORD *)this + 1);
  *((_DWORD *)a2 + 40) = v4 | 0x203;
  *((_DWORD *)a2 + 4) = v6;
  if ( !v5 )
  {
    v5 = (Caver::Proto::MeshMaterial *)operator new(0x40u);
    Caver::Proto::MeshMaterial::MeshMaterial(v5);
    *((_QWORD *)a2 + 16) = v5;
  }
  Caver::MeshMaterial::SaveToProtobufMessage((Caver::Mesh *)((char *)this + 160), v5);
  if ( *((int *)this + 3) >= 1 )
  {
    v7 = (Caver::Proto::MeshData *)*((_QWORD *)a2 + 3);
    *((_DWORD *)a2 + 40) |= 4u;
    if ( !v7 )
    {
      v7 = (Caver::Proto::MeshData *)operator new(0x20u);
      Caver::Proto::MeshData::MeshData(v7);
      *((_QWORD *)a2 + 3) = v7;
    }
    v8 = *((_DWORD *)this + 2);
    v9 = *((_QWORD *)this + 36);
    if ( (unsigned int)(v8 - 5120) >= 7 )
    {
      v11 = *((_DWORD *)v7 + 7);
    }
    else
    {
      v10 = *((_DWORD *)v7 + 7);
      *((_DWORD *)v7 + 3) = v8 - 5119;
      v11 = v10 | 1;
      *((_DWORD *)v7 + 7) = v10 | 1;
    }
    v12 = *((_DWORD *)this + 3);
    *((_DWORD *)v7 + 7) = v11 | 2;
    *((_DWORD *)v7 + 4) = v12;
    v13 = *((_DWORD *)this + 4);
    *((_DWORD *)v7 + 7) = v11 | 6;
    *((_DWORD *)v7 + 5) = v13;
    if ( v9 )
    {
      v14 = *((_QWORD *)this + 3);
      if ( !v14 )
      {
LABEL_14:
        v15 = (__int64 *)*((_QWORD *)a2 + 19);
        *((_DWORD *)a2 + 40) |= 0x1000u;
        if ( v15 == &Caver::Proto::Mesh::_default_index_data_ )
        {
          v16 = (_QWORD *)operator new(8u);
          *v16 = &byte_6FD2F8;
          *((_QWORD *)a2 + 19) = v16;
        }
        sub_569650();
        v17 = (__int64 *)*((_QWORD *)a2 + 19);
        v18 = (unsigned __int8 *)*((_QWORD *)this + 36);
        *((_DWORD *)a2 + 40) |= 0x1000u;
        if ( v17 == &Caver::Proto::Mesh::_default_index_data_ )
        {
          v17 = (__int64 *)operator new(8u);
          *v17 = (__int64)&byte_6FD2F8;
          *((_QWORD *)a2 + 19) = v17;
        }
        v19 = (Caver *)*v17;
        if ( (*(_DWORD *)(*v17 - 8) & 0x80000000) == 0 )
        {
          sub_568EA8(v17);
          v19 = (Caver *)*v17;
        }
        v20 = *((_DWORD *)this + 70);
        v21 = v20 / (int)Caver::SizeOfDataType();
        v22 = Caver::SizeOfDataType();
        switch ( v22 )
        {
          case 4:
            Caver::CopyToFileBuffer32(v19, v18, (const unsigned __int8 *)v21, v23);
            break;
          case 2:
            Caver::CopyToFileBuffer16(v19, v18, (const unsigned __int8 *)v21, v23);
            break;
          case 1:
            Caver::CopyToFileBuffer8(v19, v18, (const unsigned __int8 *)v21, v23);
            break;
        }
        goto LABEL_26;
      }
      LODWORD(v9) = v14 - v9;
    }
    else
    {
      v9 = *((_QWORD *)this + 3);
    }
    *((_DWORD *)v7 + 6) = v9;
    *((_DWORD *)v7 + 7) = v11 | 0xE;
    goto LABEL_14;
  }
LABEL_26:
  v24 = *((_QWORD *)this + 34);
  v101 = 0;
  v102 = 0;
  p = 0;
  if ( *((int *)this + 9) < 1 )
    goto LABEL_40;
  v25 = (Caver::Proto::MeshData *)*((_QWORD *)a2 + 4);
  *((_DWORD *)a2 + 40) |= 8u;
  if ( !v25 )
  {
    v25 = (Caver::Proto::MeshData *)operator new(0x20u);
    Caver::Proto::MeshData::MeshData(v25);
    *((_QWORD *)a2 + 4) = v25;
  }
  v26 = *((_DWORD *)this + 8);
  if ( (unsigned int)(v26 - 5120) >= 7 )
  {
    v28 = *((_DWORD *)v25 + 7);
  }
  else
  {
    v27 = *((_DWORD *)v25 + 7);
    *((_DWORD *)v25 + 3) = v26 - 5119;
    v28 = v27 | 1;
    *((_DWORD *)v25 + 7) = v27 | 1;
  }
  v29 = *((_DWORD *)this + 9);
  *((_DWORD *)v25 + 7) = v28 | 2;
  *((_DWORD *)v25 + 4) = v29;
  v30 = *((_DWORD *)this + 10);
  *((_DWORD *)v25 + 7) = v28 | 6;
  *((_DWORD *)v25 + 5) = v30;
  if ( v24 )
  {
    v31 = *((_QWORD *)this + 6);
    if ( !v31 )
      goto LABEL_37;
    LODWORD(v31) = v31 - v24;
  }
  else
  {
    v31 = *((_QWORD *)this + 6);
  }
  *((_DWORD *)v25 + 6) = v31;
  *((_DWORD *)v25 + 7) = v28 | 0xE;
LABEL_37:
  if ( v101 == v102 )
  {
    std::vector<Caver::MeshData const*>::_M_insert_aux((int)&p, v101);
  }
  else
  {
    *(_QWORD *)v101 = (char *)this + 32;
    v101 += 8;
  }
LABEL_40:
  if ( *((int *)this + 15) < 1 )
    goto LABEL_54;
  v32 = (Caver::Proto::MeshData *)*((_QWORD *)a2 + 5);
  *((_DWORD *)a2 + 40) |= 0x10u;
  if ( !v32 )
  {
    v32 = (Caver::Proto::MeshData *)operator new(0x20u);
    Caver::Proto::MeshData::MeshData(v32);
    *((_QWORD *)a2 + 5) = v32;
  }
  v33 = *((_DWORD *)this + 14);
  if ( (unsigned int)(v33 - 5120) >= 7 )
  {
    v35 = *((_DWORD *)v32 + 7);
  }
  else
  {
    v34 = *((_DWORD *)v32 + 7);
    *((_DWORD *)v32 + 3) = v33 - 5119;
    v35 = v34 | 1;
    *((_DWORD *)v32 + 7) = v34 | 1;
  }
  v36 = *((_DWORD *)this + 15);
  *((_DWORD *)v32 + 7) = v35 | 2;
  *((_DWORD *)v32 + 4) = v36;
  v37 = *((_DWORD *)this + 16);
  *((_DWORD *)v32 + 7) = v35 | 6;
  *((_DWORD *)v32 + 5) = v37;
  if ( v24 )
  {
    v38 = *((_QWORD *)this + 9);
    if ( !v38 )
      goto LABEL_51;
    LODWORD(v38) = v38 - v24;
  }
  else
  {
    v38 = *((_QWORD *)this + 9);
  }
  *((_DWORD *)v32 + 6) = v38;
  *((_DWORD *)v32 + 7) = v35 | 0xE;
LABEL_51:
  if ( v101 == v102 )
  {
    std::vector<Caver::MeshData const*>::_M_insert_aux((int)&p, v101);
  }
  else
  {
    *(_QWORD *)v101 = (char *)this + 56;
    v101 += 8;
  }
LABEL_54:
  if ( *((int *)this + 23) < 1 )
    goto LABEL_68;
  v39 = (Caver::Proto::MeshData *)*((_QWORD *)a2 + 13);
  *((_DWORD *)a2 + 40) |= 0x40u;
  if ( !v39 )
  {
    v39 = (Caver::Proto::MeshData *)operator new(0x20u);
    Caver::Proto::MeshData::MeshData(v39);
    *((_QWORD *)a2 + 13) = v39;
  }
  v40 = *((_DWORD *)this + 22);
  if ( (unsigned int)(v40 - 5120) >= 7 )
  {
    v42 = *((_DWORD *)v39 + 7);
  }
  else
  {
    v41 = *((_DWORD *)v39 + 7);
    *((_DWORD *)v39 + 3) = v40 - 5119;
    v42 = v41 | 1;
    *((_DWORD *)v39 + 7) = v41 | 1;
  }
  v43 = *((_DWORD *)this + 23);
  *((_DWORD *)v39 + 7) = v42 | 2;
  *((_DWORD *)v39 + 4) = v43;
  v44 = *((_DWORD *)this + 24);
  *((_DWORD *)v39 + 7) = v42 | 6;
  *((_DWORD *)v39 + 5) = v44;
  if ( v24 )
  {
    v45 = *((_QWORD *)this + 13);
    if ( !v45 )
      goto LABEL_65;
    LODWORD(v45) = v45 - v24;
  }
  else
  {
    v45 = *((_QWORD *)this + 13);
  }
  *((_DWORD *)v39 + 6) = v45;
  *((_DWORD *)v39 + 7) = v42 | 0xE;
LABEL_65:
  if ( v101 == v102 )
  {
    std::vector<Caver::MeshData const*>::_M_insert_aux((int)&p, v101);
  }
  else
  {
    *(_QWORD *)v101 = (char *)this + 88;
    v101 += 8;
  }
LABEL_68:
  if ( *((int *)this + 29) < 1 )
    goto LABEL_82;
  v46 = (Caver::Proto::MeshData *)*((_QWORD *)a2 + 14);
  *((_DWORD *)a2 + 40) |= 0x80u;
  if ( !v46 )
  {
    v46 = (Caver::Proto::MeshData *)operator new(0x20u);
    Caver::Proto::MeshData::MeshData(v46);
    *((_QWORD *)a2 + 14) = v46;
  }
  v47 = *((_DWORD *)this + 28);
  if ( (unsigned int)(v47 - 5120) >= 7 )
  {
    v49 = *((_DWORD *)v46 + 7);
  }
  else
  {
    v48 = *((_DWORD *)v46 + 7);
    *((_DWORD *)v46 + 3) = v47 - 5119;
    v49 = v48 | 1;
    *((_DWORD *)v46 + 7) = v48 | 1;
  }
  v50 = *((_DWORD *)this + 29);
  *((_DWORD *)v46 + 7) = v49 | 2;
  *((_DWORD *)v46 + 4) = v50;
  v51 = *((_DWORD *)this + 30);
  *((_DWORD *)v46 + 7) = v49 | 6;
  *((_DWORD *)v46 + 5) = v51;
  if ( v24 )
  {
    v52 = *((_QWORD *)this + 16);
    if ( !v52 )
      goto LABEL_79;
    LODWORD(v52) = v52 - v24;
  }
  else
  {
    v52 = *((_QWORD *)this + 16);
  }
  *((_DWORD *)v46 + 6) = v52;
  *((_DWORD *)v46 + 7) = v49 | 0xE;
LABEL_79:
  if ( v101 == v102 )
  {
    std::vector<Caver::MeshData const*>::_M_insert_aux((int)&p, v101);
  }
  else
  {
    *(_QWORD *)v101 = (char *)this + 112;
    v101 += 8;
  }
LABEL_82:
  if ( *((int *)this + 35) < 1 )
    goto LABEL_96;
  v53 = (Caver::Proto::MeshData *)*((_QWORD *)a2 + 15);
  *((_DWORD *)a2 + 40) |= 0x100u;
  if ( !v53 )
  {
    v53 = (Caver::Proto::MeshData *)operator new(0x20u);
    Caver::Proto::MeshData::MeshData(v53);
    *((_QWORD *)a2 + 15) = v53;
  }
  v54 = *((_DWORD *)this + 34);
  if ( (unsigned int)(v54 - 5120) >= 7 )
  {
    v56 = *((_DWORD *)v53 + 7);
  }
  else
  {
    v55 = *((_DWORD *)v53 + 7);
    *((_DWORD *)v53 + 3) = v54 - 5119;
    v56 = v55 | 1;
    *((_DWORD *)v53 + 7) = v55 | 1;
  }
  v57 = *((_DWORD *)this + 35);
  *((_DWORD *)v53 + 7) = v56 | 2;
  *((_DWORD *)v53 + 4) = v57;
  v58 = *((_DWORD *)this + 36);
  *((_DWORD *)v53 + 7) = v56 | 6;
  *((_DWORD *)v53 + 5) = v58;
  if ( v24 )
  {
    v59 = *((_QWORD *)this + 19);
    if ( !v59 )
      goto LABEL_93;
    LODWORD(v59) = v59 - v24;
  }
  else
  {
    v59 = *((_QWORD *)this + 19);
  }
  *((_DWORD *)v53 + 6) = v59;
  *((_DWORD *)v53 + 7) = v56 | 0xE;
LABEL_93:
  if ( v101 == v102 )
  {
    std::vector<Caver::MeshData const*>::_M_insert_aux((int)&p, v101);
  }
  else
  {
    *(_QWORD *)v101 = (char *)this + 136;
    v101 += 8;
  }
LABEL_96:
  if ( *((int *)this + 80) >= 1 )
  {
    v60 = 0;
    v61 = 0;
    while ( 1 )
    {
      v62 = *((_DWORD *)a2 + 15);
      v63 = *((_QWORD *)this + 10);
      v64 = *((int *)a2 + 14);
      if ( (int)v64 >= v62 )
      {
        if ( v62 == *((_DWORD *)a2 + 16) )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve((Caver::Proto::Mesh *)((char *)a2 + 48), v62 + 1);
          v62 = *((_DWORD *)a2 + 15);
        }
        *((_DWORD *)a2 + 15) = v62 + 1;
        v66 = (Caver::Proto::MeshData *)operator new(0x20u);
        Caver::Proto::MeshData::MeshData(v66);
        v67 = *((int *)a2 + 14);
        v68 = *((_QWORD *)a2 + 6);
        *((_DWORD *)a2 + 14) = v67 + 1;
        *(_QWORD *)(v68 + 8 * v67) = v66;
      }
      else
      {
        v65 = *((_QWORD *)a2 + 6);
        *((_DWORD *)a2 + 14) = v64 + 1;
        v66 = *(Caver::Proto::MeshData **)(v65 + 8 * v64);
      }
      v69 = *(_DWORD *)(v63 + v60);
      if ( (unsigned int)(v69 - 5120) >= 7 )
      {
        v71 = *((_DWORD *)v66 + 7);
      }
      else
      {
        v70 = *((_DWORD *)v66 + 7);
        *((_DWORD *)v66 + 3) = v69 - 5119;
        v71 = v70 | 1;
        *((_DWORD *)v66 + 7) = v70 | 1;
      }
      v72 = v63 + v60;
      v73 = *(_DWORD *)(v63 + v60 + 4);
      *((_DWORD *)v66 + 7) = v71 | 2;
      *((_DWORD *)v66 + 4) = v73;
      v74 = *(_DWORD *)(v63 + v60 + 8);
      *((_DWORD *)v66 + 7) = v71 | 6;
      *((_DWORD *)v66 + 5) = v74;
      if ( !v24 )
        break;
      v75 = *(_QWORD *)(v72 + 16);
      if ( v75 )
      {
        LODWORD(v75) = v75 - v24;
LABEL_110:
        *((_DWORD *)v66 + 6) = v75;
        *((_DWORD *)v66 + 7) = v71 | 0xE;
      }
      if ( v101 == v102 )
      {
        std::vector<Caver::MeshData const*>::_M_insert_aux((int)&p, v101);
      }
      else
      {
        *(_QWORD *)v101 = *((_QWORD *)this + 10) + v60;
        v101 += 8;
      }
      ++v61;
      v60 += 24;
      if ( v61 >= *((int *)this + 80) )
        goto LABEL_115;
    }
    v75 = *(_QWORD *)(v72 + 16);
    goto LABEL_110;
  }
LABEL_115:
  v76 = (__int64 *)*((_QWORD *)a2 + 18);
  *((_DWORD *)a2 + 40) |= 0x800u;
  if ( v76 == &Caver::Proto::Mesh::_default_vertex_data_ )
  {
    v77 = (_QWORD *)operator new(8u);
    *v77 = &byte_6FD2F8;
    *((_QWORD *)a2 + 18) = v77;
  }
  sub_569650();
  v78 = (char *)p;
  v99 = v101;
  if ( p != v101 )
  {
    do
    {
      v79 = *(_QWORD *)v78;
      v80 = (__int64 *)*((_QWORD *)a2 + 18);
      v81 = *(_QWORD *)(*(_QWORD *)v78 + 16LL);
      *((_DWORD *)a2 + 40) |= 0x800u;
      if ( v80 == &Caver::Proto::Mesh::_default_vertex_data_ )
      {
        v80 = (__int64 *)operator new(8u);
        *v80 = (__int64)&byte_6FD2F8;
        *((_QWORD *)a2 + 18) = v80;
        v82 = *(_QWORD *)(v79 + 16);
      }
      else
      {
        v82 = v81;
      }
      v83 = *v80;
      v84 = *((_QWORD *)this + 34);
      if ( (*(_DWORD *)(*v80 - 8) & 0x80000000) == 0 )
      {
        sub_568EA8(v80);
        v83 = *v80;
      }
      v86 = Caver::SizeOfDataType();
      if ( *(_DWORD *)this )
      {
        v87 = v82;
        v88 = *(_DWORD *)(v79 + 4);
        v89 = v87 - v84;
        v90 = 0;
        v91 = 0;
        v92 = *(int *)(v79 + 8);
        v93 = v83 + v89;
        do
        {
          v94 = (Caver *)(v93 + v90);
          v95 = (unsigned __int8 *)(v81 + v90);
          switch ( v86 )
          {
            case 4:
              Caver::CopyToFileBuffer32(v94, v95, (const unsigned __int8 *)v88, v85);
              break;
            case 2:
              Caver::CopyToFileBuffer16(v94, v95, (const unsigned __int8 *)v88, v85);
              break;
            case 1:
              Caver::CopyToFileBuffer8(v94, v95, (const unsigned __int8 *)v88, v85);
              break;
          }
          ++v91;
          v90 += v92;
        }
        while ( v91 < *(_DWORD *)this );
      }
      v78 += 8;
    }
    while ( v78 != v99 );
  }
  v96 = *((_QWORD *)a2 + 17);
  *((_DWORD *)a2 + 40) |= 0x400u;
  if ( !v96 )
  {
    v96 = operator new(0x28u);
    Caver::Proto::Box::Box((Caver::Proto::Box *)v96);
    *((_QWORD *)a2 + 17) = v96;
  }
  *(_QWORD *)(v96 + 12) = *(_QWORD *)((char *)this + 324);
  v97 = *(_DWORD *)(v96 + 36);
  *(_QWORD *)(v96 + 20) = *(_QWORD *)((char *)this + 332);
  v98 = *(_QWORD *)((char *)this + 340);
  *(_DWORD *)(v96 + 36) = v97 | 0x3F;
  *(_QWORD *)(v96 + 28) = v98;
  if ( p )
    operator delete(p);
}

