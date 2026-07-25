/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CAD94
 * Mangled: _ZN5Caver7Texture30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::Texture::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 1
 *   0x00000000001FD1D0  Caver::Texture::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x00000000002008D0  std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::BindingValue*,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>>,Caver::BindingValue const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004CB7B4  `non-virtual thunk to'Caver::Texture::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 203
 *   insn=0x00000000004CADA8 string=0x00000000004CADAC "V"
 *   insn=0x00000000004CADB0 string=0x00000000004CADB4 "("
 *   insn=0x00000000004CADC4 string=0x00000000004CADC8 "i"
 *   insn=0x00000000004CADC8 string=0x00000000004CADD0 "(y"
 *   insn=0x00000000004CADC8 string=0x0000000000597DD0 "D1"
 *   insn=0x00000000004CADD0 string=0x00000000004CADD4 ""
 *   insn=0x00000000004CADDC string=0x00000000004CADE0 ""
 *   insn=0x00000000004CADF8 string=0x00000000004CADFC "a"
 *   insn=0x00000000004CADFC string=0x00000000004CAE00 "?"
 *   insn=0x00000000004CAE08 string=0x00000000004CAE0C "("
 *   insn=0x00000000004CAE10 string=0x00000000004CAE14 "("
 *   insn=0x00000000004CAE18 string=0x00000000004CAE1C "("
 *   insn=0x00000000004CAE20 string=0x00000000004CAE24 "\t"
 *   insn=0x00000000004CAE24 string=0x00000000004CAE28 ")"
 *   insn=0x00000000004CAE28 string=0x00000000004CAE2C "\t"
 *   insn=0x00000000004CAE30 string=0x00000000004CAE34 "("
 *   insn=0x00000000004CAE38 string=0x00000000004CAE3C "("
 *   insn=0x00000000004CAE40 string=0x00000000004CAE44 "\t"
 *   insn=0x00000000004CAE40 string=0x00000000004CAE50 "("
 *   insn=0x00000000004CAE44 string=0x00000000004CAE48 ")"
 *   insn=0x00000000004CAE48 string=0x00000000004CAE4C "\t"
 *   insn=0x00000000004CAE50 string=0x00000000004CAE54 "h"
 *   insn=0x00000000004CAE70 string=0x00000000004CAE74 "5"
 *   insn=0x00000000004CAE78 string=0x00000000004CAE7C ""
 *   insn=0x00000000004CAE88 string=0x00000000004CAE8C "\t@"
 *   insn=0x00000000004CAE98 string=0x00000000004CAE9C ""
 *   insn=0x00000000004CAEA8 string=0x00000000004CAEAC "@"
 *   insn=0x00000000004CAEB8 string=0x00000000004CAEBC "5"
 *   insn=0x00000000004CAEC0 string=0x00000000004CAEC4 ""
 *   insn=0x00000000004CAED4 string=0x00000000004CAED8 "\t@"
 *   insn=0x00000000004CAEE0 string=0x00000000004CAEE4 ""
 *   insn=0x00000000004CAEF4 string=0x00000000004CAEF8 "@"
 *   insn=0x00000000004CAF2C string=0x00000000004CAF30 "a"
 *   insn=0x00000000004CAF30 string=0x00000000004CAF34 "?"
 *   insn=0x00000000004CAF3C string=0x00000000004CAF40 "("
 *   insn=0x00000000004CAF44 string=0x00000000004CAF48 "("
 *   insn=0x00000000004CAF4C string=0x00000000004CAF50 "("
 *   insn=0x00000000004CAF54 string=0x00000000004CAF58 "\t"
 *   insn=0x00000000004CAF58 string=0x00000000004CAF5C ")"
 *   insn=0x00000000004CAF5C string=0x00000000004CAF60 "\t"
 *   insn=0x00000000004CAF64 string=0x00000000004CAF68 "("
 *   insn=0x00000000004CAF6C string=0x00000000004CAF70 "("
 *   insn=0x00000000004CAF74 string=0x00000000004CAF78 "\t"
 *   insn=0x00000000004CAF74 string=0x00000000004CAF84 "("
 *   insn=0x00000000004CAF78 string=0x00000000004CAF7C ")"
 *   insn=0x00000000004CAF7C string=0x00000000004CAF80 "\t"
 *   insn=0x00000000004CAF84 string=0x00000000004CAF88 "h"
 *   insn=0x00000000004CAF9C string=0x00000000004CAFA0 "L"
 *   insn=0x00000000004CAFA4 string=0x00000000004CAFA8 "5"
 *   insn=0x00000000004CAFAC string=0x00000000004CAFB0 ""
 *   insn=0x00000000004CAFBC string=0x00000000004CAFC0 "\t@"
 *   insn=0x00000000004CAFCC string=0x00000000004CAFD0 ""
 *   insn=0x00000000004CAFDC string=0x00000000004CAFE0 "@"
 *   insn=0x00000000004CAFEC string=0x00000000004CAFF0 "5"
 *   insn=0x00000000004CAFF4 string=0x00000000004CAFF8 ""
 *   insn=0x00000000004CB008 string=0x00000000004CB00C "\t@"
 *   insn=0x00000000004CB014 string=0x00000000004CB018 ""
 *   insn=0x00000000004CB028 string=0x00000000004CB02C "@"
 *   insn=0x00000000004CB058 string=0x00000000004CB05C "9"
 *   insn=0x00000000004CB05C string=0x00000000004CB060 "a"
 *   insn=0x00000000004CB060 string=0x00000000004CB064 "?"
 *   insn=0x00000000004CB06C string=0x00000000004CB070 "("
 *   insn=0x00000000004CB074 string=0x00000000004CB078 "("
 *   insn=0x00000000004CB07C string=0x00000000004CB080 "("
 *   insn=0x00000000004CB084 string=0x00000000004CB088 "\t"
 *   insn=0x00000000004CB088 string=0x00000000004CB08C ")"
 *   insn=0x00000000004CB08C string=0x00000000004CB090 "\t"
 *   insn=0x00000000004CB094 string=0x00000000004CB098 "("
 *   insn=0x00000000004CB09C string=0x00000000004CB0A0 "("
 *   insn=0x00000000004CB0A4 string=0x00000000004CB0A8 "\t"
 *   insn=0x00000000004CB0A4 string=0x00000000004CB0B4 "("
 *   insn=0x00000000004CB0A8 string=0x00000000004CB0AC ")"
 *   insn=0x00000000004CB0AC string=0x00000000004CB0B0 "\t"
 *   insn=0x00000000004CB0B4 string=0x00000000004CB0B8 "h"
 *   insn=0x00000000004CB0D4 string=0x00000000004CB0D8 "4"
 *   insn=0x00000000004CB0DC string=0x00000000004CB0E0 ""
 *   insn=0x00000000004CB0EC string=0x00000000004CB0F0 "\t@"
 *   insn=0x00000000004CB0FC string=0x00000000004CB100 ""
 *   insn=0x00000000004CB10C string=0x00000000004CB110 "@"
 *   insn=0x00000000004CB11C string=0x00000000004CB120 "4"
 *   insn=0x00000000004CB124 string=0x00000000004CB128 ""
 *   insn=0x00000000004CB138 string=0x00000000004CB13C "\t@"
 *   insn=0x00000000004CB144 string=0x00000000004CB148 ""
 *   insn=0x00000000004CB158 string=0x00000000004CB15C "@"
 *   insn=0x00000000004CB170 string=0x00000000004CB174 "a"
 *   insn=0x00000000004CB174 string=0x00000000004CB178 "?"
 *   insn=0x00000000004CB180 string=0x00000000004CB184 "("
 *   insn=0x00000000004CB188 string=0x00000000004CB18C "("
 *   insn=0x00000000004CB190 string=0x00000000004CB194 "("
 *   insn=0x00000000004CB198 string=0x00000000004CB19C "\t"
 *   insn=0x00000000004CB19C string=0x00000000004CB1A0 ")"
 *   insn=0x00000000004CB1A0 string=0x00000000004CB1A4 "\t"
 *   insn=0x00000000004CB1A8 string=0x00000000004CB1AC "("
 *   insn=0x00000000004CB1B0 string=0x00000000004CB1B4 "("
 *   insn=0x00000000004CB1B8 string=0x00000000004CB1BC "\t"
 *   insn=0x00000000004CB1B8 string=0x00000000004CB1C8 "("
 *   insn=0x00000000004CB1BC string=0x00000000004CB1C0 ")"
 *   insn=0x00000000004CB1C0 string=0x00000000004CB1C4 "\t"
 *   insn=0x00000000004CB1C8 string=0x00000000004CB1CC "h"
 *   insn=0x00000000004CB1D4 string=0x00000000004CB1F0 "h"
 *   insn=0x00000000004CB1E8 string=0x00000000004CB1EC "3"
 *   insn=0x00000000004CB1F0 string=0x00000000004CB1F4 ""
 *   insn=0x00000000004CB1F4 string=0x00000000004CB1F8 "h"
 *   insn=0x00000000004CB1FC string=0x00000000004CB200 "h"
 *   insn=0x00000000004CB200 string=0x00000000004CB204 "\t@"
 *   insn=0x00000000004CB20C string=0x00000000004CB210 "h\n@"
 *   insn=0x00000000004CB210 string=0x00000000004CB214 ""
 *   insn=0x00000000004CB214 string=0x00000000004CB218 "h\n"
 *   insn=0x00000000004CB21C string=0x00000000004CB220 "h"
 *   insn=0x00000000004CB220 string=0x00000000004CB224 "@"
 *   insn=0x00000000004CB230 string=0x00000000004CB234 "3"
 *   insn=0x00000000004CB234 string=0x00000000004CB238 "h"
 *   insn=0x00000000004CB238 string=0x00000000004CB23C ""
 *   insn=0x00000000004CB23C string=0x00000000004CB240 "h"
 *   insn=0x00000000004CB244 string=0x00000000004CB248 "h"
 *   insn=0x00000000004CB24C string=0x00000000004CB250 "\t@"
 *   insn=0x00000000004CB254 string=0x00000000004CB258 "h\n@"
 *   insn=0x00000000004CB258 string=0x00000000004CB25C ""
 *   insn=0x00000000004CB25C string=0x00000000004CB260 "h\n"
 *   insn=0x00000000004CB264 string=0x00000000004CB268 "h"
 *   insn=0x00000000004CB26C string=0x00000000004CB270 "@"
 *   insn=0x00000000004CB2A0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004CB2B0 string=0x00000000004CB2B4 ""
 *   insn=0x00000000004CB2C0 string=0x00000000004CB2C4 "\t@"
 *   insn=0x00000000004CB2D0 string=0x00000000004CB2D4 ""
 *   insn=0x00000000004CB2E0 string=0x00000000004CB2E4 "@"
 *   insn=0x00000000004CB2FC string=0x00000000004CB300 "t""
 *   insn=0x00000000004CB304 string=0x00000000004CB308 ""
 *   insn=0x00000000004CB314 string=0x00000000004CB318 "\t@"
 *   insn=0x00000000004CB324 string=0x00000000004CB328 ""
 *   insn=0x00000000004CB334 string=0x00000000004CB338 "@"
 *   insn=0x00000000004CB350 string=0x00000000004CB354 "4"
 *   insn=0x00000000004CB358 string=0x00000000004CB35C ""
 *   insn=0x00000000004CB368 string=0x00000000004CB36C "\t@"
 *   insn=0x00000000004CB378 string=0x00000000004CB37C ""
 *   insn=0x00000000004CB388 string=0x00000000004CB38C "@"
 *   insn=0x00000000004CB3A0 string=0x00000000004CB3A4 ""
 *   insn=0x00000000004CB3B0 string=0x00000000004CB3B4 "\t@"
 *   insn=0x00000000004CB3C0 string=0x00000000004CB3C4 ""
 *   insn=0x00000000004CB3D0 string=0x00000000004CB3D4 "@"
 *   insn=0x00000000004CB3F0 string=0x00000000004CB3F4 ""
 *   insn=0x00000000004CB400 string=0x00000000004CB404 "\t@"
 *   insn=0x00000000004CB410 string=0x00000000004CB414 ""
 *   insn=0x00000000004CB420 string=0x00000000004CB424 "@"
 *   insn=0x00000000004CB43C string=0x00000000004CB440 "4"
 *   insn=0x00000000004CB444 string=0x00000000004CB448 ""
 *   insn=0x00000000004CB454 string=0x00000000004CB458 "\t@"
 *   insn=0x00000000004CB464 string=0x00000000004CB468 ""
 *   insn=0x00000000004CB474 string=0x00000000004CB478 "@"
 *   insn=0x00000000004CB484 string=0x00000000004CB488 "4"
 *   insn=0x00000000004CB48C string=0x00000000004CB490 ""
 *   insn=0x00000000004CB49C string=0x00000000004CB4A0 "\t@"
 *   insn=0x00000000004CB4AC string=0x00000000004CB4B0 ""
 *   insn=0x00000000004CB4BC string=0x00000000004CB4C0 "@"
 *   insn=0x00000000004CB4DC string=0x00000000004CB4E0 ""
 *   insn=0x00000000004CB4E4 string=0x00000000004CB4E8 "!"
 *   insn=0x00000000004CB4EC string=0x00000000004CB4F0 "\t@"
 *   insn=0x00000000004CB4FC string=0x00000000004CB500 ""
 *   insn=0x00000000004CB504 string=0x00000000004CB508 "!"
 *   insn=0x00000000004CB50C string=0x00000000004CB510 "@"
 *   insn=0x00000000004CB530 string=0x00000000004CB534 ""
 *   insn=0x00000000004CB540 string=0x00000000004CB544 "\t@"
 *   insn=0x00000000004CB550 string=0x00000000004CB554 ""
 *   insn=0x00000000004CB560 string=0x00000000004CB564 "@"
 *   insn=0x00000000004CB56C string=0x00000000004CB570 "w"
 *   insn=0x00000000004CB57C string=0x00000000004CB580 "4"
 *   insn=0x00000000004CB584 string=0x00000000004CB588 ""
 *   insn=0x00000000004CB594 string=0x00000000004CB598 "\t@"
 *   insn=0x00000000004CB5A4 string=0x00000000004CB5A8 ""
 *   insn=0x00000000004CB5B4 string=0x00000000004CB5B8 "@"
 *   insn=0x00000000004CB5C4 string=0x00000000004CB5C8 "4"
 *   insn=0x00000000004CB5CC string=0x00000000004CB5D0 ""
 *   insn=0x00000000004CB5DC string=0x00000000004CB5E0 "\t@"
 *   insn=0x00000000004CB5EC string=0x00000000004CB5F0 ""
 *   insn=0x00000000004CB5FC string=0x00000000004CB600 "@"
 *   insn=0x00000000004CB608 string=0x00000000004CB60C "P"
 *   insn=0x00000000004CB61C string=0x00000000004CB620 ""
 *   insn=0x00000000004CB624 string=0x00000000004CB628 "!"
 *   insn=0x00000000004CB62C string=0x00000000004CB630 "\t@"
 *   insn=0x00000000004CB63C string=0x00000000004CB640 ""
 *   insn=0x00000000004CB644 string=0x00000000004CB648 "!"
 *   insn=0x00000000004CB64C string=0x00000000004CB650 "@"
 *   insn=0x00000000004CB658 string=0x00000000004CB65C "T"
 *   insn=0x00000000004CB670 string=0x00000000004CB674 ""
 *   insn=0x00000000004CB680 string=0x00000000004CB684 "\t@"
 *   insn=0x00000000004CB690 string=0x00000000004CB694 ""
 *   insn=0x00000000004CB6A0 string=0x00000000004CB6A4 "@"
 *   insn=0x00000000004CB6AC string=0x00000000004CB6B0 "'"
 *   insn=0x00000000004CB6BC string=0x00000000004CB6C0 "4"
 *   insn=0x00000000004CB6C4 string=0x00000000004CB6C8 ""
 *   insn=0x00000000004CB6D4 string=0x00000000004CB6D8 "\t@"
 *   insn=0x00000000004CB6E4 string=0x00000000004CB6E8 ""
 *   insn=0x00000000004CB6F4 string=0x00000000004CB6F8 "@"
 *   insn=0x00000000004CB704 string=0x00000000004CB708 "4"
 *   insn=0x00000000004CB70C string=0x00000000004CB710 ""
 *   insn=0x00000000004CB71C string=0x00000000004CB720 "\t@"
 *   insn=0x00000000004CB72C string=0x00000000004CB730 ""
 *   insn=0x00000000004CB73C string=0x00000000004CB740 "@"
 *   insn=0x00000000004CB74C string=0x00000000004CB750 "]"
 *   insn=0x00000000004CB760 string=0x00000000004CB764 ""
 *   insn=0x00000000004CB770 string=0x00000000004CB774 "\t@"
 *   insn=0x00000000004CB780 string=0x00000000004CB784 ""
 *   insn=0x00000000004CB790 string=0x00000000004CB794 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Texture::GetEnumValuesForBindedProperty(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // x23
  __int64 *i; // x20
  __int64 v6; // x1
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 *v12; // x20
  unsigned __int64 v13; // x23
  __int64 v14; // x1
  _QWORD *v15; // x21
  __int64 v16; // x8
  __int64 v17; // x8
  __int64 v18; // x8
  __int64 v19; // x8
  __int64 v20; // x1
  _QWORD *v21; // x20
  __int64 v22; // x8
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x1
  _QWORD *v27; // x19
  __int64 v28; // x8
  __int64 v29; // x8
  __int64 v30; // x8
  __int64 v31; // x8
  int v32; // [xsp+0h] [xbp-60h]
  __int64 v33; // [xsp+8h] [xbp-58h]
  _QWORD *v34; // [xsp+10h] [xbp-50h]
  __int64 v35; // [xsp+18h] [xbp-48h]
  _QWORD *v36; // [xsp+20h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  switch ( a2 )
  {
    case 1:
      v12 = &Caver::imageTypeStrings;
      v13 = -1;
      while ( 1 )
      {
        Caver::BindingValue::ValueWithInt();
        v14 = *(_QWORD *)(a3 + 8);
        if ( v14 != *(_QWORD *)(a3 + 16) )
          break;
        std::vector<Caver::BindingValue>::_M_insert_aux();
        v15 = v36;
        if ( v36 )
          goto LABEL_29;
LABEL_32:
        if ( v34 )
        {
          v18 = v34[1] - 1LL;
          v34[1] = v18;
          if ( !v18 )
          {
            (*(void (__fastcall **)())(*v34 + 16LL))();
            v19 = v34[2] - 1LL;
            v34[2] = v19;
            if ( !v19 )
              (*(void (__fastcall **)())(*v34 + 24LL))();
          }
        }
        ++v13;
        ++v12;
        if ( v13 >= 3 )
          return;
      }
      *(_DWORD *)v14 = v32;
      *(_QWORD *)(v14 + 8) = v33;
      *(_QWORD *)(v14 + 16) = v34;
      if ( v34 )
        ++v34[1];
      *(_QWORD *)(v14 + 24) = v35;
      *(_QWORD *)(v14 + 32) = v36;
      if ( v36 )
        ++v36[1];
      *(_QWORD *)(a3 + 8) = v14 + 40;
      v15 = v36;
      if ( !v36 )
        goto LABEL_32;
LABEL_29:
      v16 = v15[1] - 1LL;
      v15[1] = v16;
      if ( !v16 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
        v17 = v15[2] - 1LL;
        v15[2] = v17;
        if ( !v17 )
          (*(void (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
      }
      goto LABEL_32;
    case 2:
    case 6:
      v4 = 0;
      for ( i = &qword_6E9FE8; ; ++i )
      {
        Caver::BindingValue::ValueWithInt();
        v6 = *(_QWORD *)(a3 + 8);
        if ( v6 != *(_QWORD *)(a3 + 16) )
          break;
        std::vector<Caver::BindingValue>::_M_insert_aux();
        v7 = v36;
        if ( v36 )
          goto LABEL_11;
LABEL_14:
        if ( v34 )
        {
          v10 = v34[1] - 1LL;
          v34[1] = v10;
          if ( !v10 )
          {
            (*(void (__fastcall **)())(*v34 + 16LL))();
            v11 = v34[2] - 1LL;
            v34[2] = v11;
            if ( !v11 )
              (*(void (__fastcall **)())(*v34 + 24LL))();
          }
        }
        if ( (unsigned __int64)++v4 >= 0xB )
          return;
      }
      *(_DWORD *)v6 = v32;
      *(_QWORD *)(v6 + 8) = v33;
      *(_QWORD *)(v6 + 16) = v34;
      if ( v34 )
        ++v34[1];
      *(_QWORD *)(v6 + 24) = v35;
      *(_QWORD *)(v6 + 32) = v36;
      if ( v36 )
        ++v36[1];
      *(_QWORD *)(a3 + 8) = v6 + 40;
      v7 = v36;
      if ( !v36 )
        goto LABEL_14;
LABEL_11:
      v8 = v7[1] - 1LL;
      v7[1] = v8;
      if ( !v8 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
        v9 = v7[2] - 1LL;
        v7[2] = v9;
        if ( !v9 )
          (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
      }
      goto LABEL_14;
    case 5:
      Caver::BindingValue::ValueWithInt();
      v20 = *(_QWORD *)(a3 + 8);
      if ( v20 == *(_QWORD *)(a3 + 16) )
      {
        std::vector<Caver::BindingValue>::_M_insert_aux();
        v21 = v36;
        if ( !v36 )
          goto LABEL_49;
        goto LABEL_46;
      }
      *(_DWORD *)v20 = v32;
      *(_QWORD *)(v20 + 8) = v33;
      *(_QWORD *)(v20 + 16) = v34;
      if ( v34 )
        ++v34[1];
      *(_QWORD *)(v20 + 24) = v35;
      *(_QWORD *)(v20 + 32) = v36;
      if ( v36 )
        ++v36[1];
      *(_QWORD *)(a3 + 8) = v20 + 40;
      v21 = v36;
      if ( v36 )
      {
LABEL_46:
        v22 = v21[1] - 1LL;
        v21[1] = v22;
        if ( !v22 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
          v23 = v21[2] - 1LL;
          v21[2] = v23;
          if ( !v23 )
            (*(void (__fastcall **)(_QWORD *))(*v21 + 24LL))(v21);
        }
      }
LABEL_49:
      if ( v34 )
      {
        v24 = v34[1] - 1LL;
        v34[1] = v24;
        if ( !v24 )
        {
          (*(void (__fastcall **)())(*v34 + 16LL))();
          v25 = v34[2] - 1LL;
          v34[2] = v25;
          if ( !v25 )
            (*(void (__fastcall **)())(*v34 + 24LL))();
        }
      }
      Caver::BindingValue::ValueWithInt();
      v26 = *(_QWORD *)(a3 + 8);
      if ( v26 != *(_QWORD *)(a3 + 16) )
      {
        *(_DWORD *)v26 = v32;
        *(_QWORD *)(v26 + 8) = v33;
        *(_QWORD *)(v26 + 16) = v34;
        if ( v34 )
          ++v34[1];
        *(_QWORD *)(v26 + 24) = v35;
        *(_QWORD *)(v26 + 32) = v36;
        if ( v36 )
          ++v36[1];
        *(_QWORD *)(a3 + 8) = v26 + 40;
        v27 = v36;
        if ( !v36 )
          goto LABEL_64;
        goto LABEL_61;
      }
      std::vector<Caver::BindingValue>::_M_insert_aux();
      v27 = v36;
      if ( v36 )
      {
LABEL_61:
        v28 = v27[1] - 1LL;
        v27[1] = v28;
        if ( !v28 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
          v29 = v27[2] - 1LL;
          v27[2] = v29;
          if ( !v29 )
            (*(void (__fastcall **)(_QWORD *))(*v27 + 24LL))(v27);
        }
      }
LABEL_64:
      if ( v34 )
      {
        v30 = v34[1] - 1LL;
        v34[1] = v30;
        if ( !v30 )
        {
          (*(void (__fastcall **)())(*v34 + 16LL))();
          v31 = v34[2] - 1LL;
          v34[2] = v31;
          if ( !v31 )
            (*(void (__fastcall **)())(*v34 + 24LL))();
        }
      }
      return;
    default:
      return;
  }
}

