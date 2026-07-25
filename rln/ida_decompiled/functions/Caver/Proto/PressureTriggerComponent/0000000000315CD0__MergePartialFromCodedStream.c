/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000315CD0
 * Mangled: _ZN5Caver5Proto24PressureTriggerComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::PressureTriggerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F8D20  Caver::Proto::Program::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x0000000000316074  Caver::Proto::PressureTriggerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 107
 *   insn=0x0000000000315CE4 string=0x0000000000315CE8 "W"
 *   insn=0x0000000000315D00 string=0x0000000000315D04 "h"
 *   insn=0x0000000000315D08 string=0x0000000000315D0C """
 *   insn=0x0000000000315D0C string=0x0000000000315D10 "\t"
 *   insn=0x0000000000315D14 string=0x0000000000315D18 "!"
 *   insn=0x0000000000315D18 string=0x0000000000315D1C ""
 *   insn=0x0000000000315D1C string=0x0000000000315D20 "a""
 *   insn=0x0000000000315D20 string=0x0000000000315D24 "h"
 *   insn=0x0000000000315D28 string=0x0000000000315D44 "(|"
 *   insn=0x0000000000315D30 string=0x0000000000315D34 "C"
 *   insn=0x0000000000315D34 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000315D38 string=0x0000000000315D3C "a""
 *   insn=0x0000000000315D3C string=0x0000000000315D40 "a"
 *   insn=0x0000000000315D44 string=0x0000000000315D48 ""
 *   insn=0x0000000000315D4C string=0x0000000000315D50 ""
 *   insn=0x0000000000315D50 string=0x0000000000315D54 "{"
 *   insn=0x0000000000315D50 string=0x0000000000315E50 "("
 *   insn=0x0000000000315D54 string=0x0000000000315D58 ""
 *   insn=0x0000000000315D5C string=0x0000000000315D60 "("
 *   insn=0x0000000000315D5C string=0x0000000000315DB4 "("
 *   insn=0x0000000000315D5C string=0x0000000000315DC4 "("
 *   insn=0x0000000000315D5C string=0x0000000000315DF4 "("
 *   insn=0x0000000000315D64 string=0x0000000000315D68 "a"
 *   insn=0x0000000000315D70 string=0x0000000000315D74 "w"
 *   insn=0x0000000000315D74 string=0x0000000000315D78 "`"
 *   insn=0x0000000000315D74 string=0x00000000001FA750 "0'"
 *   insn=0x0000000000315D84 string=0x0000000000315D88 "("
 *   insn=0x0000000000315D8C string=0x0000000000315D90 "i"
 *   insn=0x0000000000315D90 string=0x0000000000315D94 "?"
 *   insn=0x0000000000315D94 string=0x0000000000315D98 "b"
 *   insn=0x0000000000315D98 string=0x0000000000315D9C "*"
 *   insn=0x0000000000315D9C string=0x0000000000315DA0 "_I"
 *   insn=0x0000000000315DA4 string=0x0000000000315DA8 ")"
 *   insn=0x0000000000315DA8 string=0x0000000000315DAC "i"
 *   insn=0x0000000000315DBC string=0x0000000000315DC0 "M"
 *   insn=0x0000000000315DC4 string=0x0000000000315DC8 "a"
 *   insn=0x0000000000315DC8 string=0x0000000000315DCC "j"
 *   insn=0x0000000000315DCC string=0x0000000000315DD0 "_"
 *   insn=0x0000000000315DD4 string=0x0000000000315DD8 "I"
 *   insn=0x0000000000315DDC string=0x0000000000315DE0 ")"
 *   insn=0x0000000000315DE0 string=0x0000000000315DE4 "J"
 *   insn=0x0000000000315DE8 string=0x0000000000315DEC "j"
 *   insn=0x0000000000315E04 string=0x0000000000315E08 ""
 *   insn=0x0000000000315E10 string=0x0000000000315E28 "h"
 *   insn=0x0000000000315E18 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000315E1C string=0x0000000000315E20 "x|"
 *   insn=0x0000000000315E20 string=0x00000000001F5000 "P'"
 *   insn=0x0000000000315E30 string=0x0000000000315E34 "\t"
 *   insn=0x0000000000315E38 string=0x0000000000315E3C ")"
 *   insn=0x0000000000315E3C string=0x0000000000315E40 ""
 *   insn=0x0000000000315E44 string=0x0000000000315E48 "h"
 *   insn=0x0000000000315E4C string=0x0000000000315E7C "h&G)\n"
 *   insn=0x0000000000315E60 string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000315E64 string=0x0000000000315E68 "o"
 *   insn=0x0000000000315E70 string=0x0000000000315E74 "w"
 *   insn=0x0000000000315E74 string=0x0000000000315E78 "`"
 *   insn=0x0000000000315E74 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000315E7C string=0x0000000000315E80 "\n"
 *   insn=0x0000000000315E84 string=0x0000000000315E88 "j:"
 *   insn=0x0000000000315EA8 string=0x00000000001F8D20 "0'"
 *   insn=0x0000000000315EAC string=0x0000000000315EB0 "h"
 *   insn=0x0000000000315EC0 string=0x0000000000315EC4 "h:@"
 *   insn=0x0000000000315EC4 string=0x0000000000315EC8 ""
 *   insn=0x0000000000315EC8 string=0x0000000000315ECC "K"
 *   insn=0x0000000000315ECC string=0x0000000000315ED0 "h:"
 *   insn=0x0000000000315ECC string=0x0000000000315ED4 "h"
 *   insn=0x0000000000315ED8 string=0x0000000000315EDC "B"
 *   insn=0x0000000000315EDC string=0x0000000000315EE0 "\t"
 *   insn=0x0000000000315EE0 string=0x0000000000315EE4 "?i"
 *   insn=0x0000000000315EE8 string=0x0000000000315EEC ""
 *   insn=0x0000000000315EEC string=0x0000000000315EF0 "h"
 *   insn=0x0000000000315EF8 string=0x0000000000315EFC ""
 *   insn=0x0000000000315F04 string=0x0000000000315F1C "h"
 *   insn=0x0000000000315F10 string=0x0000000000315F14 ";|"
 *   insn=0x0000000000315F24 string=0x0000000000315F28 "\t"
 *   insn=0x0000000000315F2C string=0x0000000000315F30 ")"
 *   insn=0x0000000000315F30 string=0x0000000000315F34 ""
 *   insn=0x0000000000315F38 string=0x0000000000315F3C "h"
 *   insn=0x0000000000315F40 string=0x0000000000315F54 "h&G)\n"
 *   insn=0x0000000000315F48 string=0x0000000000315F4C "A"
 *   insn=0x0000000000315F54 string=0x0000000000315F58 "\n"
 *   insn=0x0000000000315F5C string=0x0000000000315F60 "j:"
 *   insn=0x0000000000315F60 string=0x0000000000315F64 "\n"
 *   insn=0x0000000000315F7C string=0x0000000000315F80 "h"
 *   insn=0x0000000000315F84 string=0x0000000000315F88 "h"
 *   insn=0x0000000000315F98 string=0x0000000000315F9C "h:@"
 *   insn=0x0000000000315F9C string=0x0000000000315FA0 ""
 *   insn=0x0000000000315FA0 string=0x0000000000315FA4 "K"
 *   insn=0x0000000000315FA4 string=0x0000000000315FA8 "h:"
 *   insn=0x0000000000315FA4 string=0x0000000000315FAC "i"
 *   insn=0x0000000000315FAC string=0x0000000000315FB0 "?"
 *   insn=0x0000000000315FB4 string=0x0000000000315FB8 "*"
 *   insn=0x0000000000315FB8 string=0x0000000000315FBC "_"
 *   insn=0x0000000000315FBC string=0x0000000000315FC0 "!"
 *   insn=0x0000000000315FC0 string=0x0000000000315FC4 "*"
 *   insn=0x0000000000315FC4 string=0x0000000000315FC8 "j"
 *   insn=0x0000000000315FC8 string=0x0000000000315FCC "_"
 *   insn=0x0000000000315FCC string=0x0000000000315FD0 "C"
 *   insn=0x0000000000315FDC string=0x0000000000315FE0 " "
 *   insn=0x0000000000315FE4 string=0x0000000000315FE8 "j"
 *   insn=0x0000000000315FEC string=0x0000000000315FF0 "?"
 *   insn=0x0000000000315FF8 string=0x0000000000315FFC "i"
 *   insn=0x0000000000315FFC string=0x0000000000316000 "_"
 *   insn=0x0000000000316008 string=0x000000000031600C "h.@"
 *   insn=0x0000000000316018 string=0x000000000031601C "`"
 *   insn=0x0000000000316058 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000316068 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PressureTriggerComponent::MergePartialFromCodedStream(
        Caver::Proto::PressureTriggerComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  int v9; // w9
  int v10; // w8
  _BYTE *v11; // x9
  unsigned __int64 v12; // x8
  char *v13; // x10
  unsigned int v14; // w9
  unsigned __int8 *v15; // x10
  Caver::Proto::Program *v16; // x21
  char *v17; // x8
  int v18; // w8
  int v19; // w9
  int v20; // w22
  int v21; // w8
  bool v22; // vf
  int v23; // w8
  _BYTE *v24; // x8
  Caver::Proto::Program *v25; // x21
  char *v26; // x8
  int v27; // w8
  int v28; // w9
  int v29; // w22
  int v30; // w8
  int v31; // w8
  _BYTE *v32; // x9
  int v33; // w11
  __int64 result; // x0
  unsigned int v35; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v36; // [xsp+8h] [xbp-38h]

  v36 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
    v5 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v5 < *((_QWORD *)a2 + 2) && (*v5 & 0x80000000) == 0 )
    {
      v6 = (unsigned __int8)*v5;
      *((_DWORD *)a2 + 8) = v6;
      *((_QWORD *)a2 + 1) = v5 + 1;
      if ( !(_DWORD)v6 )
        return 1;
      goto LABEL_7;
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
    v6 = TagFallback;
    *((_DWORD *)a2 + 8) = TagFallback;
    if ( !TagFallback )
      return 1;
LABEL_7:
    switch ( (unsigned int)v6 >> 3 )
    {
      case 1u:
        v8 = v6 & 7;
        if ( v8 != 5 )
          goto LABEL_27;
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v35) & 1) == 0 )
          return 0;
        v9 = *((_DWORD *)this + 10);
        *((_DWORD *)this + 3) = v35;
        v10 = v9 | 1;
        *((_DWORD *)this + 10) = v9 | 1;
        v11 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v11 >= *((_QWORD *)a2 + 2) || *v11 != 18 )
          continue;
        *((_QWORD *)a2 + 1) = v11 + 1;
        goto LABEL_21;
      case 2u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_27;
        v10 = *((_DWORD *)this + 10);
LABEL_21:
        v16 = (Caver::Proto::Program *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 10) = v10 | 4;
        if ( !v16 )
        {
          v16 = (Caver::Proto::Program *)operator new(0x30u);
          Caver::Proto::Program::Program(v16);
          *((_QWORD *)this + 3) = v16;
        }
        v17 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v17 >= *((_QWORD *)a2 + 2) || *v17 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v35) & 1) == 0 )
            return 0;
        }
        else
        {
          v35 = (unsigned __int8)*v17;
          *((_QWORD *)a2 + 1) = v17 + 1;
        }
        v18 = *((_DWORD *)a2 + 14);
        v19 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v18 + 1;
        if ( v18 >= v19 )
          return 0;
        v20 = google::protobuf::io::CodedInputStream::PushLimit(a2, v35);
        if ( (Caver::Proto::Program::MergePartialFromCodedStream(v16, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v20);
        v21 = *((_DWORD *)a2 + 14);
        v22 = __OFSUB__(v21, 1);
        v23 = v21 - 1;
        if ( v23 < 0 == v22 )
          *((_DWORD *)a2 + 14) = v23;
        v24 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v24 >= *((_QWORD *)a2 + 2) || *v24 != 26 )
          continue;
        *((_QWORD *)a2 + 1) = v24 + 1;
LABEL_39:
        v25 = (Caver::Proto::Program *)*((_QWORD *)this + 4);
        *((_DWORD *)this + 10) |= 8u;
        if ( !v25 )
        {
          v25 = (Caver::Proto::Program *)operator new(0x30u);
          Caver::Proto::Program::Program(v25);
          *((_QWORD *)this + 4) = v25;
        }
        v26 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v26 >= *((_QWORD *)a2 + 2) || *v26 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v35) & 1) == 0 )
            return 0;
        }
        else
        {
          v35 = (unsigned __int8)*v26;
          *((_QWORD *)a2 + 1) = v26 + 1;
        }
        v27 = *((_DWORD *)a2 + 14);
        v28 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v27 + 1;
        if ( v27 >= v28 )
          return 0;
        v29 = google::protobuf::io::CodedInputStream::PushLimit(a2, v35);
        if ( (Caver::Proto::Program::MergePartialFromCodedStream(v25, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v29);
        v30 = *((_DWORD *)a2 + 14);
        v22 = __OFSUB__(v30, 1);
        v31 = v30 - 1;
        if ( v31 < 0 == v22 )
          *((_DWORD *)a2 + 14) = v31;
        v32 = (_BYTE *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v32 >= v12 || *v32 != 32 )
          continue;
        v13 = v32 + 1;
        *((_QWORD *)a2 + 1) = v32 + 1;
        if ( (unsigned __int64)(v32 + 1) >= v12 )
          goto LABEL_53;
LABEL_17:
        if ( *v13 < 0 )
        {
LABEL_53:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v35) & 1) == 0 )
            return 0;
          v14 = v35;
          v15 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
          v12 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v14 = (unsigned __int8)*v13;
          v15 = (unsigned __int8 *)(v13 + 1);
          v35 = v14;
          *((_QWORD *)a2 + 1) = v15;
        }
        v33 = *((_DWORD *)this + 10);
        *((_BYTE *)this + 16) = v14 != 0;
        *((_DWORD *)this + 10) = v33 | 2;
        if ( v15 == (unsigned __int8 *)v12 && *((_DWORD *)a2 + 11) )
        {
          result = 1;
          *((_DWORD *)a2 + 8) = 0;
          *((_BYTE *)a2 + 36) = 1;
          return result;
        }
        break;
      case 3u:
        v8 = v6 & 7;
        if ( v8 == 2 )
          goto LABEL_39;
        goto LABEL_27;
      case 4u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_27;
        v13 = (char *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v13 < v12 )
          goto LABEL_17;
        goto LABEL_53;
      default:
        v8 = v6 & 7;
LABEL_27:
        if ( v8 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v6,
                a3)
            & 1) == 0 )
          return 0;
        continue;
    }
  }
}

