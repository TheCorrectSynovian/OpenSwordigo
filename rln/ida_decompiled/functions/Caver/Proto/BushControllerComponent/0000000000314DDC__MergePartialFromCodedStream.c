/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000314DDC
 * Mangled: _ZN5Caver5Proto23BushControllerComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::BushControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 70
 *   insn=0x0000000000314DEC string=0x0000000000314DF0 "U"
 *   insn=0x0000000000314E00 string=0x0000000000314E04 "h"
 *   insn=0x0000000000314E08 string=0x0000000000314E0C """
 *   insn=0x0000000000314E0C string=0x0000000000314E10 "\t"
 *   insn=0x0000000000314E14 string=0x0000000000314E18 "!"
 *   insn=0x0000000000314E18 string=0x0000000000314E1C ""
 *   insn=0x0000000000314E1C string=0x0000000000314E20 "a""
 *   insn=0x0000000000314E20 string=0x0000000000314E24 "h"
 *   insn=0x0000000000314E28 string=0x0000000000314E2C "p"
 *   insn=0x0000000000314E28 string=0x0000000000314E44 "(|"
 *   insn=0x0000000000314E34 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000314E38 string=0x0000000000314E3C "a""
 *   insn=0x0000000000314E3C string=0x0000000000314E40 "a"
 *   insn=0x0000000000314E4C string=0x0000000000314EC0 "("
 *   insn=0x0000000000314E54 string=0x0000000000314E90 "("
 *   insn=0x0000000000314E5C string=0x0000000000314E60 "("
 *   insn=0x0000000000314E5C string=0x0000000000314EF0 "("
 *   insn=0x0000000000314E64 string=0x0000000000314E68 "i"
 *   insn=0x0000000000314E68 string=0x0000000000314E6C "?"
 *   insn=0x0000000000314E70 string=0x0000000000314E74 "*"
 *   insn=0x0000000000314E74 string=0x0000000000314E78 "j\t"
 *   insn=0x0000000000314E78 string=0x0000000000314E7C "J"
 *   insn=0x0000000000314E7C string=0x0000000000314E80 ")"
 *   insn=0x0000000000314E84 string=0x0000000000314E88 "i"
 *   insn=0x0000000000314E88 string=0x0000000000314E8C "L"
 *   insn=0x0000000000314E94 string=0x0000000000314E98 "i"
 *   insn=0x0000000000314E98 string=0x0000000000314E9C "?"
 *   insn=0x0000000000314EA0 string=0x0000000000314EA4 "*"
 *   insn=0x0000000000314EA8 string=0x0000000000314EAC "J"
 *   insn=0x0000000000314EAC string=0x0000000000314EB0 ")"
 *   insn=0x0000000000314EB4 string=0x0000000000314EB8 "i"
 *   insn=0x0000000000314EB8 string=0x0000000000314EBC "-"
 *   insn=0x0000000000314EC4 string=0x0000000000314EC8 "i"
 *   insn=0x0000000000314EC8 string=0x0000000000314ECC "?"
 *   insn=0x0000000000314ED0 string=0x0000000000314ED4 "*"
 *   insn=0x0000000000314ED8 string=0x0000000000314EDC "J"
 *   insn=0x0000000000314EDC string=0x0000000000314EE0 ")"
 *   insn=0x0000000000314EE4 string=0x0000000000314EE8 "i"
 *   insn=0x0000000000314EFC string=0x0000000000314F00 "t"
 *   insn=0x0000000000314F00 string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000314F04 string=0x0000000000314F08 ";"
 *   insn=0x0000000000314F10 string=0x0000000000314F14 "O"
 *   insn=0x0000000000314F14 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000314F1C string=0x0000000000314F20 "i"
 *   insn=0x0000000000314F28 string=0x0000000000314F2C "?"
 *   insn=0x0000000000314F2C string=0x0000000000314F30 "j"
 *   insn=0x0000000000314F34 string=0x0000000000314F38 "b"
 *   insn=0x0000000000314F38 string=0x0000000000314F3C "*"
 *   insn=0x0000000000314F3C string=0x0000000000314F40 "_A"
 *   insn=0x0000000000314F44 string=0x0000000000314F48 ")"
 *   insn=0x0000000000314F48 string=0x0000000000314F4C "i"
 *   insn=0x0000000000314F4C string=0x0000000000314F50 "?"
 *   insn=0x0000000000314F5C string=0x0000000000314F60 "<"
 *   insn=0x0000000000314F68 string=0x0000000000314F6C "i"
 *   insn=0x0000000000314F74 string=0x0000000000314F78 "?"
 *   insn=0x0000000000314F78 string=0x0000000000314F7C "j"
 *   insn=0x0000000000314F84 string=0x0000000000314F88 "*"
 *   insn=0x0000000000314F88 string=0x0000000000314F8C "_a"
 *   insn=0x0000000000314F90 string=0x0000000000314F94 ")"
 *   insn=0x0000000000314F94 string=0x0000000000314F98 "i"
 *   insn=0x0000000000314F98 string=0x0000000000314F9C "?"
 *   insn=0x0000000000314FA8 string=0x0000000000314FAC ")"
 *   insn=0x0000000000314FAC string=0x0000000000314FB0 " "
 *   insn=0x0000000000314FB4 string=0x0000000000314FB8 "i"
 *   insn=0x0000000000314FC0 string=0x0000000000314FC4 "?"
 *   insn=0x0000000000314FC4 string=0x0000000000314FC8 "j"
 *   insn=0x0000000000314FD0 string=0x0000000000314FD4 "h.@"
 *   insn=0x0000000000314FD4 string=0x0000000000314FD8 "h"
 *   insn=0x0000000000314FE0 string=0x0000000000314FE4 "`"
 *   insn=0x000000000031501C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BushControllerComponent::MergePartialFromCodedStream(
        Caver::Proto::BushControllerComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  unsigned int v8; // w8
  int v9; // w8
  unsigned __int64 v10; // x8
  char *v11; // x9
  unsigned int v12; // w10
  unsigned __int8 *v13; // x9
  unsigned __int8 *v14; // x9
  unsigned int v15; // w10
  _BYTE *v16; // x9
  char *v17; // x9
  unsigned int v18; // w10
  _BYTE *v19; // x9
  int v20; // w11
  int v21; // w11
  int v22; // w11
  __int64 result; // x0
  unsigned int v24; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v25; // [xsp+8h] [xbp-28h]

  v25 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v5 >= *((_QWORD *)a2 + 2) || *v5 < 0 )
        {
          TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
          v6 = TagFallback;
          *((_DWORD *)a2 + 8) = TagFallback;
          if ( !TagFallback )
            return 1;
        }
        else
        {
          v6 = (unsigned __int8)*v5;
          *((_DWORD *)a2 + 8) = v6;
          *((_QWORD *)a2 + 1) = v5 + 1;
          if ( !(_DWORD)v6 )
            return 1;
        }
        v8 = (unsigned int)v6 >> 3;
        if ( (unsigned int)v6 >> 3 != 1 )
          break;
        v9 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_23;
        v17 = (char *)*((_QWORD *)a2 + 1);
        v10 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v17 >= v10 || *v17 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v24) & 1) == 0 )
            return 0;
          v18 = v24;
          v19 = (_BYTE *)*((_QWORD *)a2 + 1);
          v10 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v18 = (unsigned __int8)*v17;
          v19 = v17 + 1;
          v24 = v18;
          *((_QWORD *)a2 + 1) = v19;
        }
        v20 = *((_DWORD *)this + 6);
        *((_DWORD *)this + 3) = v18;
        *((_DWORD *)this + 6) = v20 | 1;
        if ( (unsigned __int64)v19 < v10 && *v19 == 16 )
        {
          v14 = v19 + 1;
          *((_QWORD *)a2 + 1) = v14;
          if ( (unsigned __int64)v14 >= v10 )
            goto LABEL_31;
          goto LABEL_16;
        }
      }
      if ( v8 != 2 )
        break;
      v9 = v6 & 7;
      if ( (v6 & 7) != 0 )
        goto LABEL_23;
      v14 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
      v10 = *((_QWORD *)a2 + 2);
      if ( (unsigned __int64)v14 >= v10 )
      {
LABEL_31:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v24) & 1) == 0 )
          return 0;
        v15 = v24;
        v16 = (_BYTE *)*((_QWORD *)a2 + 1);
        v10 = *((_QWORD *)a2 + 2);
        goto LABEL_33;
      }
LABEL_16:
      if ( (char)*v14 < 0 )
        goto LABEL_31;
      v15 = *v14;
      v16 = v14 + 1;
      v24 = v15;
      *((_QWORD *)a2 + 1) = v16;
LABEL_33:
      v21 = *((_DWORD *)this + 6);
      *((_DWORD *)this + 4) = v15;
      *((_DWORD *)this + 6) = v21 | 2;
      if ( (unsigned __int64)v16 < v10 && *v16 == 24 )
      {
        v11 = v16 + 1;
        *((_QWORD *)a2 + 1) = v11;
        if ( (unsigned __int64)v11 >= v10 )
          goto LABEL_36;
LABEL_12:
        if ( (*v11 & 0x80000000) == 0 )
        {
          v12 = (unsigned __int8)*v11;
          v13 = (unsigned __int8 *)(v11 + 1);
          v24 = v12;
          *((_QWORD *)a2 + 1) = v13;
          goto LABEL_38;
        }
LABEL_36:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v24) & 1) == 0 )
          return 0;
        v12 = v24;
        v13 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
        v10 = *((_QWORD *)a2 + 2);
LABEL_38:
        v22 = *((_DWORD *)this + 6);
        *((_DWORD *)this + 5) = v12;
        *((_DWORD *)this + 6) = v22 | 4;
        if ( v13 == (unsigned __int8 *)v10 && *((_DWORD *)a2 + 11) )
        {
          result = 1;
          *((_DWORD *)a2 + 8) = 0;
          *((_BYTE *)a2 + 36) = 1;
          return result;
        }
      }
    }
    if ( v8 == 3 )
    {
      v9 = v6 & 7;
      if ( (v6 & 7) == 0 )
      {
        v11 = (char *)*((_QWORD *)a2 + 1);
        v10 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v11 >= v10 )
          goto LABEL_36;
        goto LABEL_12;
      }
    }
    else
    {
      v9 = v6 & 7;
    }
LABEL_23:
    if ( v9 == 4 )
      return 1;
  }
  while ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v6, a3)
         & 1) != 0 );
  return 0;
}

