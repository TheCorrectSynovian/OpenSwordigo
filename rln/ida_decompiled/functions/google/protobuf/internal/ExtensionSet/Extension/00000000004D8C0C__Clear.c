/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D8C0C
 * Mangled: _ZN6google8protobuf8internal12ExtensionSet9Extension5ClearEv
 * Demangled: google::protobuf::internal::ExtensionSet::Extension::Clear(void)
 *
 * Callers: 1
 *   0x0000000000200D90  google::protobuf::internal::ExtensionSet::Extension::Clear(void)
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 41
 *   insn=0x00000000004D8C18 string=0x00000000004D8C1C "h&@9"
 *   insn=0x00000000004D8C1C string=0x00000000004D8C20 ""
 *   insn=0x00000000004D8C20 string=0x00000000004D8C24 "i"
 *   insn=0x00000000004D8C20 string=0x00000000004D8C60 "h*@9"
 *   insn=0x00000000004D8C24 string=0x00000000004D8C28 "h"@9)"
 *   insn=0x00000000004D8C28 string=0x00000000004D8C2C ")"
 *   insn=0x00000000004D8C2C string=0x00000000004D8C30 "(yh"
 *   insn=0x00000000004D8C30 string=0x00000000004D8C34 ""
 *   insn=0x00000000004D8C38 string=0x00000000004D8C3C "("
 *   insn=0x00000000004D8C3C string=0x00000000004D8C40 "\t"
 *   insn=0x00000000004D8C40 string=0x00000000004D8C48 "(y"
 *   insn=0x00000000004D8C48 string=0x00000000004D8C4C ""
 *   insn=0x00000000004D8C50 string=0x00000000004D8C54 "h"
 *   insn=0x00000000004D8C50 string=0x00000000004D8CA4 "s"
 *   insn=0x00000000004D8C50 string=0x00000000004D8CE8 "s"
 *   insn=0x00000000004D8C58 string=0x00000000004D8C5C "9"
 *   insn=0x00000000004D8C64 string=0x00000000004D8C68 "i"
 *   insn=0x00000000004D8C68 string=0x00000000004D8C6C "h"@9)"
 *   insn=0x00000000004D8C6C string=0x00000000004D8C70 ")"
 *   insn=0x00000000004D8C70 string=0x00000000004D8C74 "(yh"
 *   insn=0x00000000004D8C78 string=0x00000000004D8C7C "`"
 *   insn=0x00000000004D8C7C string=0x00000000004D8D28 "`"
 *   insn=0x00000000004D8C84 string=0x00000000004D8C88 "`"
 *   insn=0x00000000004D8C90 string=0x00000000004D8C94 ""
 *   insn=0x00000000004D8C98 string=0x00000000004D8C9C "@"
 *   insn=0x00000000004D8C9C string=0x00000000004D8CA0 "&"
 *   insn=0x00000000004D8CA4 string=0x00000000004D8CA8 "h\n@"
 *   insn=0x00000000004D8CB4 string=0x00000000004D8CB8 "h"
 *   insn=0x00000000004D8CC4 string=0x00000000004D8CC8 ""
 *   insn=0x00000000004D8CD0 string=0x00000000004D8CD4 "h\n"
 *   insn=0x00000000004D8CE8 string=0x00000000004D8CEC "h\n@"
 *   insn=0x00000000004D8CF0 string=0x00000000004D8CF4 "k"
 *   insn=0x00000000004D8CF8 string=0x00000000004D8CFC "h"
 *   insn=0x00000000004D8D00 string=0x00000000004D8D04 ""
 *   insn=0x00000000004D8D04 string=0x00000000004D8D08 ""
 *   insn=0x00000000004D8D0C string=0x00000000004D8D10 "h\n"
 *   insn=0x00000000004D8D18 string=0x00000000004D8D1C ""
 *   insn=0x00000000004D8D20 string=0x00000000004D8D24 ""
 *   insn=0x00000000004D8D28 string=0x00000000004D8D2C ""
 *   insn=0x00000000004D8D2C string=0x00000000004D8D30 ""
 *   insn=0x00000000004D8D38 string=0x00000000004D8D3C "h*"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_BYTE *__fastcall google::protobuf::internal::ExtensionSet::Extension::Clear(_BYTE *this)
{
  _BYTE *v1; // x19
  int v2; // w8
  __int64 v3; // x19
  __int64 v4; // x20
  __int64 v5; // x20

  v1 = this;
  if ( this[9] )
  {
    switch ( this[8] )
    {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x10:
      case 0x11:
      case 0x12:
        *(_DWORD *)(*(_QWORD *)this + 8LL) = 0;
        break;
      case 9:
      case 0xC:
        v3 = *(_QWORD *)this;
        if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
        {
          v4 = 0;
          do
          {
            this = (_BYTE *)sub_568CB8(
                              *(_QWORD *)(*(_QWORD *)v3 + 8 * v4),
                              0,
                              *(_QWORD *)(**(_QWORD **)(*(_QWORD *)v3 + 8 * v4) - 24LL),
                              0);
            ++v4;
          }
          while ( v4 < *(int *)(v3 + 8) );
        }
        goto LABEL_15;
      case 0xA:
      case 0xB:
        v3 = *(_QWORD *)this;
        if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
        {
          v5 = 0;
          do
          {
            this = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v3 + 8 * v5) + 32LL))(*(_QWORD *)(*(_QWORD *)v3 + 8 * v5));
            ++v5;
          }
          while ( v5 < *(int *)(v3 + 8) );
        }
LABEL_15:
        *(_DWORD *)(v3 + 8) = 0;
        break;
      default:
        return this;
    }
  }
  else if ( !this[10] )
  {
    v2 = google::protobuf::internal::WireFormatLite::kFieldTypeToCppTypeMap[(unsigned __int8)this[8]];
    if ( v2 == 10 )
    {
      this = (_BYTE *)(*(__int64 (**)(void))(**(_QWORD **)this + 32LL))();
    }
    else if ( v2 == 9 )
    {
      this = (_BYTE *)sub_568CB8(*(_QWORD *)this, 0, *(_QWORD *)(**(_QWORD **)this - 24LL), 0);
    }
    v1[10] = 1;
  }
  return this;
}

