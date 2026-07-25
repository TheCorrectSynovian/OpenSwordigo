/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000337D1C
 * Mangled: _ZN5Caver5Proto8MeshData27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::MeshData::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001FF2E0  Caver::Proto::MeshData::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 98
 *   insn=0x0000000000337D2C string=0x0000000000337D30 "U"
 *   insn=0x0000000000337D48 string=0x0000000000337D4C "h"
 *   insn=0x0000000000337D50 string=0x0000000000337D54 """
 *   insn=0x0000000000337D54 string=0x0000000000337D58 "\t"
 *   insn=0x0000000000337D5C string=0x0000000000337D60 "!"
 *   insn=0x0000000000337D60 string=0x0000000000337D64 ""
 *   insn=0x0000000000337D64 string=0x0000000000337D68 "a""
 *   insn=0x0000000000337D68 string=0x0000000000337D6C "h"
 *   insn=0x0000000000337D70 string=0x0000000000337D8C "(|"
 *   insn=0x0000000000337D78 string=0x0000000000337D7C "1"
 *   insn=0x0000000000337D7C string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000337D80 string=0x0000000000337D84 "a""
 *   insn=0x0000000000337D8C string=0x0000000000337D90 ""
 *   insn=0x0000000000337D98 string=0x0000000000337E68 "("
 *   insn=0x0000000000337D9C string=0x0000000000337DA0 ""
 *   insn=0x0000000000337DA4 string=0x0000000000337DA8 "("
 *   insn=0x0000000000337DA4 string=0x0000000000337DD8 "("
 *   insn=0x0000000000337DA4 string=0x0000000000337E08 "("
 *   insn=0x0000000000337DA4 string=0x0000000000337E38 "("
 *   insn=0x0000000000337DAC string=0x0000000000337DB0 "i"
 *   insn=0x0000000000337DB0 string=0x0000000000337DB4 "?"
 *   insn=0x0000000000337DB4 string=0x0000000000337DB8 "b"
 *   insn=0x0000000000337DB8 string=0x0000000000337DBC "("
 *   insn=0x0000000000337DBC string=0x0000000000337DC0 "("
 *   insn=0x0000000000337DC0 string=0x0000000000337DC4 ""
 *   insn=0x0000000000337DC4 string=0x0000000000337DC8 ")"
 *   insn=0x0000000000337DCC string=0x0000000000337DD0 "i"
 *   insn=0x0000000000337DD0 string=0x0000000000337DD4 "1"
 *   insn=0x0000000000337DD4 string=0x0000000000337E98 "\t"
 *   insn=0x0000000000337DDC string=0x0000000000337DE0 "i"
 *   insn=0x0000000000337DE0 string=0x0000000000337DE4 "?"
 *   insn=0x0000000000337DE8 string=0x0000000000337DEC "*"
 *   insn=0x0000000000337DF0 string=0x0000000000337DF4 "J"
 *   insn=0x0000000000337DF4 string=0x0000000000337DF8 ")"
 *   insn=0x0000000000337DFC string=0x0000000000337E00 "i"
 *   insn=0x0000000000337E00 string=0x0000000000337E04 "O"
 *   insn=0x0000000000337E0C string=0x0000000000337E10 "i"
 *   insn=0x0000000000337E10 string=0x0000000000337E14 "?"
 *   insn=0x0000000000337E18 string=0x0000000000337E1C "*"
 *   insn=0x0000000000337E20 string=0x0000000000337E24 "J"
 *   insn=0x0000000000337E24 string=0x0000000000337E28 ")"
 *   insn=0x0000000000337E2C string=0x0000000000337E30 "i"
 *   insn=0x0000000000337E30 string=0x0000000000337E34 "V"
 *   insn=0x0000000000337E3C string=0x0000000000337E40 "i"
 *   insn=0x0000000000337E40 string=0x0000000000337E44 "?"
 *   insn=0x0000000000337E48 string=0x0000000000337E4C "*"
 *   insn=0x0000000000337E4C string=0x0000000000337E50 "j"
 *   insn=0x0000000000337E50 string=0x0000000000337E54 "J"
 *   insn=0x0000000000337E54 string=0x0000000000337E58 ")"
 *   insn=0x0000000000337E5C string=0x0000000000337E60 "i"
 *   insn=0x0000000000337E60 string=0x0000000000337E64 "$"
 *   insn=0x0000000000337E6C string=0x0000000000337E70 "`\n"
 *   insn=0x0000000000337E78 string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000337E7C string=0x0000000000337E80 "Q"
 *   insn=0x0000000000337E88 string=0x0000000000337E8C "q"
 *   insn=0x0000000000337E8C string=0x00000000001F9050 "0'"
 *   insn=0x0000000000337E98 string=0x0000000000337E9C "?"
 *   insn=0x0000000000337EA0 string=0x0000000000337EB4 "i"
 *   insn=0x0000000000337EA8 string=0x0000000000337EAC ")"
 *   insn=0x0000000000337EB4 string=0x0000000000337EB8 "?"
 *   insn=0x0000000000337EBC string=0x0000000000337EC0 "*"
 *   insn=0x0000000000337EC0 string=0x0000000000337EC4 "_A"
 *   insn=0x0000000000337EC4 string=0x0000000000337EC8 "!"
 *   insn=0x0000000000337EC8 string=0x0000000000337ECC ")"
 *   insn=0x0000000000337ECC string=0x0000000000337ED0 "i"
 *   insn=0x0000000000337ED0 string=0x0000000000337ED4 "?"
 *   insn=0x0000000000337EE0 string=0x0000000000337EE4 "["
 *   insn=0x0000000000337EEC string=0x0000000000337EF0 "i"
 *   insn=0x0000000000337EF8 string=0x0000000000337EFC "?"
 *   insn=0x0000000000337EFC string=0x0000000000337F00 "j"
 *   insn=0x0000000000337F04 string=0x0000000000337F08 """
 *   insn=0x0000000000337F08 string=0x0000000000337F0C "*"
 *   insn=0x0000000000337F0C string=0x0000000000337F10 "_a"
 *   insn=0x0000000000337F14 string=0x0000000000337F18 ")"
 *   insn=0x0000000000337F18 string=0x0000000000337F1C "i"
 *   insn=0x0000000000337F1C string=0x0000000000337F20 "?"
 *   insn=0x0000000000337F20 string=0x0000000000337F24 "C"
 *   insn=0x0000000000337F2C string=0x0000000000337F30 "H"
 *   insn=0x0000000000337F38 string=0x0000000000337F3C "i"
 *   insn=0x0000000000337F44 string=0x0000000000337F48 "?"
 *   insn=0x0000000000337F48 string=0x0000000000337F4C "j"
 *   insn=0x0000000000337F54 string=0x0000000000337F58 "*"
 *   insn=0x0000000000337F58 string=0x0000000000337F5C "_"
 *   insn=0x0000000000337F5C string=0x0000000000337F60 "a"
 *   insn=0x0000000000337F60 string=0x0000000000337F64 ")"
 *   insn=0x0000000000337F64 string=0x0000000000337F68 "i"
 *   insn=0x0000000000337F68 string=0x0000000000337F6C "?"
 *   insn=0x0000000000337F6C string=0x0000000000337F70 "c"
 *   insn=0x0000000000337F78 string=0x0000000000337F7C "5"
 *   insn=0x0000000000337F7C string=0x0000000000337F80 " "
 *   insn=0x0000000000337F84 string=0x0000000000337F88 "i"
 *   insn=0x0000000000337F90 string=0x0000000000337F94 "?"
 *   insn=0x0000000000337F94 string=0x0000000000337F98 "j"
 *   insn=0x0000000000337F9C string=0x0000000000337FA0 "a"
 *   insn=0x0000000000337FA0 string=0x0000000000337FA4 "h.@"
 *   insn=0x0000000000337FA4 string=0x0000000000337FA8 "("
 *   insn=0x0000000000337FB0 string=0x0000000000337FB4 "`"
 *   insn=0x0000000000337FEC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MeshData::MergePartialFromCodedStream(
        Caver::Proto::MeshData *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  char *v9; // x9
  unsigned int v10; // w8
  unsigned __int64 v11; // x8
  char *v12; // x9
  unsigned int v13; // w10
  _BYTE *v14; // x9
  char *v15; // x9
  unsigned int v16; // w10
  unsigned __int8 *v17; // x9
  char *v18; // x9
  unsigned int v19; // w10
  _BYTE *v20; // x9
  int v21; // w9
  _BYTE *v22; // x9
  int v23; // w11
  int v24; // w11
  int v25; // w11
  __int64 result; // x0
  unsigned int v27; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v28; // [xsp+8h] [xbp-28h]

  v28 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 2 )
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
    switch ( (unsigned int)v6 >> 3 )
    {
      case 1u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_25;
        v9 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v9 >= *((_QWORD *)a2 + 2) || *v9 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v27) & 1) == 0 )
            return 0;
          v10 = v27;
        }
        else
        {
          v10 = (unsigned __int8)*v9;
          v27 = v10;
          *((_QWORD *)a2 + 1) = v9 + 1;
        }
        if ( v10 - 1 <= 6 )
        {
          v21 = *((_DWORD *)this + 7);
          *((_DWORD *)this + 3) = v10;
          *((_DWORD *)this + 7) = v21 | 1;
        }
        v22 = (_BYTE *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v22 >= v11 || *v22 != 16 )
          continue;
        v18 = v22 + 1;
        *((_QWORD *)a2 + 1) = v18;
        if ( (unsigned __int64)v18 < v11 )
          goto LABEL_22;
        goto LABEL_35;
      case 2u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_25;
        v18 = (char *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v18 >= v11 )
          goto LABEL_35;
LABEL_22:
        if ( *v18 < 0 )
        {
LABEL_35:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v27) & 1) == 0 )
            return 0;
          v19 = v27;
          v20 = (_BYTE *)*((_QWORD *)a2 + 1);
          v11 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v19 = (unsigned __int8)*v18;
          v20 = v18 + 1;
          v27 = v19;
          *((_QWORD *)a2 + 1) = v20;
        }
        v23 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 4) = v19;
        *((_DWORD *)this + 7) = v23 | 2;
        if ( (unsigned __int64)v20 >= v11 || *v20 != 24 )
          continue;
        v12 = v20 + 1;
        *((_QWORD *)a2 + 1) = v12;
        if ( (unsigned __int64)v12 >= v11 )
          goto LABEL_40;
LABEL_14:
        if ( *v12 < 0 )
        {
LABEL_40:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v27) & 1) == 0 )
            return 0;
          v13 = v27;
          v14 = (_BYTE *)*((_QWORD *)a2 + 1);
          v11 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v13 = (unsigned __int8)*v12;
          v14 = v12 + 1;
          v27 = v13;
          *((_QWORD *)a2 + 1) = v14;
        }
        v24 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 5) = v13;
        *((_DWORD *)this + 7) = v24 | 4;
        if ( (unsigned __int64)v14 >= v11 || *v14 != 32 )
          continue;
        v15 = v14 + 1;
        *((_QWORD *)a2 + 1) = v15;
        if ( (unsigned __int64)v15 >= v11 )
          goto LABEL_45;
LABEL_18:
        if ( (*v15 & 0x80000000) == 0 )
        {
          v16 = (unsigned __int8)*v15;
          v17 = (unsigned __int8 *)(v15 + 1);
          v27 = v16;
          *((_QWORD *)a2 + 1) = v17;
          goto LABEL_47;
        }
LABEL_45:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v27) & 1) != 0 )
        {
          v16 = v27;
          v17 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
          v11 = *((_QWORD *)a2 + 2);
LABEL_47:
          v25 = *((_DWORD *)this + 7);
          *((_DWORD *)this + 6) = v16;
          *((_DWORD *)this + 7) = v25 | 8;
          if ( v17 == (unsigned __int8 *)v11 && *((_DWORD *)a2 + 11) )
          {
            result = 1;
            *((_DWORD *)a2 + 8) = 0;
            *((_BYTE *)a2 + 36) = 1;
            return result;
          }
          continue;
        }
        return 0;
      case 3u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_25;
        v12 = (char *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v12 < v11 )
          goto LABEL_14;
        goto LABEL_40;
      case 4u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_25;
        v15 = (char *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v15 < v11 )
          goto LABEL_18;
        goto LABEL_45;
      default:
        v8 = v6 & 7;
LABEL_25:
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

