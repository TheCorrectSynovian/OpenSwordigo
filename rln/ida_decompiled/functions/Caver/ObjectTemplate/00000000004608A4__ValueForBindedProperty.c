/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004608A4
 * Mangled: _ZN5Caver14ObjectTemplate22ValueForBindedPropertyEi
 * Demangled: Caver::ObjectTemplate::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001F8010  Caver::ObjectTemplate::ValueForBindedProperty(int)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8010  Caver::ObjectTemplate::ValueForBindedProperty(int)
 *   0x00000000001FA5F0  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 80
 *   insn=0x00000000004608B4 string=0x00000000004608B8 "V"
 *   insn=0x00000000004608C0 string=0x00000000004608C4 "?"
 *   insn=0x00000000004608CC string=0x00000000004608D0 "?"
 *   insn=0x00000000004608D4 string=0x00000000004608D8 "?"
 *   insn=0x00000000004608E8 string=0x00000000004608EC "Y"
 *   insn=0x00000000004608F8 string=0x00000000004608FC "U"
 *   insn=0x0000000000460904 string=0x0000000000460908 "h"
 *   insn=0x0000000000460908 string=0x000000000046090C ""
 *   insn=0x000000000046090C string=0x0000000000460910 "h"
 *   insn=0x0000000000460914 string=0x000000000046098C "("
 *   insn=0x0000000000460918 string=0x000000000046091C "h"
 *   insn=0x000000000046091C string=0x0000000000460920 ""
 *   insn=0x0000000000460920 string=0x0000000000460924 "h"
 *   insn=0x0000000000460944 string=0x0000000000460948 "\t"
 *   insn=0x0000000000460948 string=0x000000000046094C ")"
 *   insn=0x000000000046094C string=0x0000000000460950 "\t"
 *   insn=0x0000000000460960 string=0x0000000000460964 "("
 *   insn=0x0000000000460964 string=0x0000000000460968 "\t"
 *   insn=0x000000000046096C string=0x0000000000460970 ")"
 *   insn=0x0000000000460970 string=0x0000000000460974 "\t"
 *   insn=0x0000000000460974 string=0x0000000000460978 ""
 *   insn=0x0000000000460984 string=0x0000000000460988 "2"
 *   insn=0x000000000046098C string=0x0000000000460990 ""
 *   insn=0x0000000000460998 string=0x000000000046099C "a"
 *   insn=0x00000000004609B4 string=0x00000000001FA5F0 "0'"
 *   insn=0x00000000004609B8 string=0x00000000004609BC "m|"
 *   insn=0x00000000004609BC string=0x00000000004609C0 "s"
 *   insn=0x00000000004609C0 string=0x0000000000460A0C "3"
 *   insn=0x00000000004609C4 string=0x00000000004609C8 "("
 *   insn=0x00000000004609C8 string=0x00000000004609CC "h"
 *   insn=0x00000000004609CC string=0x00000000004609D0 ""
 *   insn=0x00000000004609D0 string=0x00000000004609D4 "h"
 *   insn=0x00000000004609D8 string=0x00000000004609DC "h"
 *   insn=0x00000000004609DC string=0x00000000004609E0 "\t@"
 *   insn=0x00000000004609E8 string=0x00000000004609EC "h\n@"
 *   insn=0x00000000004609EC string=0x00000000004609F0 ""
 *   insn=0x00000000004609F0 string=0x00000000004609F4 "h\n"
 *   insn=0x00000000004609F8 string=0x00000000004609FC "h"
 *   insn=0x00000000004609FC string=0x0000000000460A00 "@"
 *   insn=0x0000000000460A0C string=0x0000000000460A10 "h"
 *   insn=0x0000000000460A10 string=0x0000000000460A14 ""
 *   insn=0x0000000000460A14 string=0x0000000000460A18 "h"
 *   insn=0x0000000000460A1C string=0x0000000000460A20 "h"
 *   insn=0x0000000000460A24 string=0x0000000000460A28 "\t@"
 *   insn=0x0000000000460A2C string=0x0000000000460A30 "h\n@"
 *   insn=0x0000000000460A30 string=0x0000000000460A34 ""
 *   insn=0x0000000000460A34 string=0x0000000000460A38 "h\n"
 *   insn=0x0000000000460A3C string=0x0000000000460A40 "h"
 *   insn=0x0000000000460A44 string=0x0000000000460A48 "@"
 *   insn=0x0000000000460A74 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000460A7C string=0x0000000000460A80 "-"
 *   insn=0x0000000000460A7C string=0x0000000000460AF4 "h"
 *   insn=0x0000000000460A84 string=0x0000000000460A88 "s"
 *   insn=0x0000000000460A88 string=0x0000000000460A8C "*"
 *   insn=0x0000000000460A88 string=0x0000000000460AB4 "h"
 *   insn=0x0000000000460A94 string=0x0000000000460AB0 "3"
 *   insn=0x0000000000460A98 string=0x0000000000460A9C "&"
 *   insn=0x0000000000460AA4 string=0x0000000000460AA8 "2|"
 *   insn=0x0000000000460AA8 string=0x0000000000460AAC "u"
 *   insn=0x0000000000460AB4 string=0x0000000000460AB8 ""
 *   insn=0x0000000000460AB8 string=0x0000000000460ABC "h"
 *   insn=0x0000000000460AC0 string=0x0000000000460AC4 "h"
 *   insn=0x0000000000460AC4 string=0x0000000000460AC8 "\t@"
 *   insn=0x0000000000460AD0 string=0x0000000000460AD4 "h\n@"
 *   insn=0x0000000000460AD4 string=0x0000000000460AD8 ""
 *   insn=0x0000000000460AD8 string=0x0000000000460ADC "h\n"
 *   insn=0x0000000000460AE0 string=0x0000000000460AE4 "h"
 *   insn=0x0000000000460AE4 string=0x0000000000460AE8 "@"
 *   insn=0x0000000000460AF4 string=0x0000000000460AF8 ""
 *   insn=0x0000000000460AF8 string=0x0000000000460AFC "h"
 *   insn=0x0000000000460B00 string=0x0000000000460B04 "h"
 *   insn=0x0000000000460B04 string=0x0000000000460B08 "\t@"
 *   insn=0x0000000000460B10 string=0x0000000000460B14 "h\n@"
 *   insn=0x0000000000460B14 string=0x0000000000460B18 ""
 *   insn=0x0000000000460B18 string=0x0000000000460B1C "h\n"
 *   insn=0x0000000000460B20 string=0x0000000000460B24 "h"
 *   insn=0x0000000000460B24 string=0x0000000000460B28 "@"
 *   insn=0x0000000000460B34 string=0x0000000000460B38 "c"
 *   insn=0x0000000000460B40 string=0x0000000000460B44 "3]"
 *   insn=0x0000000000460B44 string=0x00000000001F8010 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::ObjectTemplate::ValueForBindedProperty(
        Caver::ObjectTemplate *this@<X0>,
        const Caver::Program *a2@<X1>,
        __int64 a3@<X8>)
{
  _QWORD *v3; // x19
  _QWORD *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  char *v11; // [xsp+0h] [xbp-50h] BYREF
  __int64 v12; // [xsp+8h] [xbp-48h]
  __int64 v13; // [xsp+10h] [xbp-40h]
  __int64 v14; // [xsp+18h] [xbp-38h]
  __int64 v15; // [xsp+20h] [xbp-30h]
  __int64 v16; // [xsp+28h] [xbp-28h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( (_DWORD)a2 )
  {
    case 'f':
      v4 = (_QWORD *)*((_QWORD *)this + 11);
      v3 = (_QWORD *)*((_QWORD *)this + 12);
      if ( v3 )
        ++v3[1];
      if ( v4 )
      {
        if ( v3 )
          ++v3[1];
        sub_56A528(&v11, v4);
        v12 = v4[1];
        v5 = v4[2];
        v13 = v5;
        if ( v5 )
          ++*(_QWORD *)(v5 + 8);
        v14 = v4[3];
        v6 = v4[4];
        v15 = v6;
        LODWORD(v4) = 1;
        if ( v6 )
          ++*(_QWORD *)(v6 + 8);
      }
      else
      {
        v14 = 0;
        v15 = 0;
        v13 = 0;
        v11 = &byte_6FD2F8;
        v12 = 0;
      }
      Caver::BindingValue::ValueWithProgram((Caver::BindingValue *)&v11, a2);
      Caver::Program::~Program((Caver::Program *)&v11);
      if ( v3 )
      {
        if ( (((unsigned int)v4 ^ 1) & 1) == 0 )
        {
          v7 = v3[1] - 1LL;
          v3[1] = v7;
          if ( !v7 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
            v8 = v3[2] - 1LL;
            v3[2] = v8;
            if ( !v8 )
              (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
          }
        }
      }
      if ( v3 )
      {
        v9 = v3[1] - 1LL;
        v3[1] = v9;
        if ( !v9 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
          v10 = v3[2] - 1LL;
          v3[2] = v10;
          if ( !v10 )
            (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
        }
      }
      break;
    case 'e':
      Caver::BindingValue::ValueWithFloat(this, *((float *)this + 76));
      break;
    case 'd':
      Caver::BindingValue::ValueWithString();
      break;
    default:
      *(_DWORD *)a3 = 0;
      *(_QWORD *)(a3 + 24) = 0;
      *(_QWORD *)(a3 + 32) = 0;
      *(_QWORD *)(a3 + 8) = 0;
      *(_QWORD *)(a3 + 16) = 0;
      break;
  }
}

