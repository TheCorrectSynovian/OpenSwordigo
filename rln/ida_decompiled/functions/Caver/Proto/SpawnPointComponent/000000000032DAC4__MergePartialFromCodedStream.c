/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032DAC4
 * Mangled: _ZN5Caver5Proto19SpawnPointComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::SpawnPointComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6150  Caver::Proto::Vector3::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x000000000032DD0C  Caver::Proto::SpawnPointComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 66
 *   insn=0x000000000032DAD8 string=0x000000000032DADC "W"
 *   insn=0x000000000032DAEC string=0x000000000032DAF0 "h"
 *   insn=0x000000000032DAF4 string=0x000000000032DAF8 """
 *   insn=0x000000000032DAF8 string=0x000000000032DAFC "\t"
 *   insn=0x000000000032DB00 string=0x000000000032DB04 "!"
 *   insn=0x000000000032DB04 string=0x000000000032DB08 ""
 *   insn=0x000000000032DB08 string=0x000000000032DB0C "a""
 *   insn=0x000000000032DB0C string=0x000000000032DB10 "h"
 *   insn=0x000000000032DB14 string=0x000000000032DB18 "j"
 *   insn=0x000000000032DB14 string=0x000000000032DB30 "(|"
 *   insn=0x000000000032DB20 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000032DB24 string=0x000000000032DB28 "a""
 *   insn=0x000000000032DB38 string=0x000000000032DB58 "("
 *   insn=0x000000000032DB3C string=0x000000000032DB40 "A"
 *   insn=0x000000000032DB40 string=0x000000000032DB44 "("
 *   insn=0x000000000032DB40 string=0x000000000032DB88 "("
 *   insn=0x000000000032DB50 string=0x000000000032DB54 "%"
 *   insn=0x000000000032DB5C string=0x000000000032DB60 "i"
 *   insn=0x000000000032DB60 string=0x000000000032DB64 "?"
 *   insn=0x000000000032DB68 string=0x000000000032DB6C "*"
 *   insn=0x000000000032DB70 string=0x000000000032DB74 "J"
 *   insn=0x000000000032DB74 string=0x000000000032DB78 ")"
 *   insn=0x000000000032DB7C string=0x000000000032DB80 "i"
 *   insn=0x000000000032DB94 string=0x000000000032DB98 "N?"
 *   insn=0x000000000032DB98 string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000032DB9C string=0x000000000032DBA0 "J"
 *   insn=0x000000000032DBA8 string=0x000000000032DBAC ")-"
 *   insn=0x000000000032DBAC string=0x00000000001F9050 "0'"
 *   insn=0x000000000032DBB4 string=0x000000000032DBB8 "i"
 *   insn=0x000000000032DBC0 string=0x000000000032DBC4 "?"
 *   insn=0x000000000032DBC4 string=0x000000000032DBC8 "j"
 *   insn=0x000000000032DBD0 string=0x000000000032DBD4 "("
 *   insn=0x000000000032DBDC string=0x000000000032DBE0 "("
 *   insn=0x000000000032DBE0 string=0x000000000032DBE4 "h"
 *   insn=0x000000000032DBE8 string=0x000000000032DBEC "H"
 *   insn=0x000000000032DBF4 string=0x000000000032DC0C "h"
 *   insn=0x000000000032DBF8 string=0x000000000032DBFC "y"
 *   insn=0x000000000032DBFC string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032DC04 string=0x00000000001FAF50 "0'"
 *   insn=0x000000000032DC14 string=0x000000000032DC18 "\t"
 *   insn=0x000000000032DC1C string=0x000000000032DC20 ")"
 *   insn=0x000000000032DC20 string=0x000000000032DC24 ""
 *   insn=0x000000000032DC28 string=0x000000000032DC2C "h"
 *   insn=0x000000000032DC30 string=0x000000000032DC44 "h&G)\n"
 *   insn=0x000000000032DC3C string=0x000000000032DC40 "@"
 *   insn=0x000000000032DC44 string=0x000000000032DC48 "\n"
 *   insn=0x000000000032DC4C string=0x000000000032DC50 "j:"
 *   insn=0x000000000032DC5C string=0x000000000032DC60 "HS"
 *   insn=0x000000000032DC6C string=0x000000000032DC70 "8!"
 *   insn=0x000000000032DC70 string=0x00000000001F6150 "0'"
 *   insn=0x000000000032DC74 string=0x000000000032DC78 "h"
 *   insn=0x000000000032DC78 string=0x000000000032DC7C "h"
 *   insn=0x000000000032DC84 string=0x000000000032DC88 "bT"
 *   insn=0x000000000032DC88 string=0x000000000032DC8C "h:@"
 *   insn=0x000000000032DC8C string=0x000000000032DC90 ""
 *   insn=0x000000000032DC90 string=0x000000000032DC94 "K"
 *   insn=0x000000000032DC94 string=0x000000000032DC98 "h:"
 *   insn=0x000000000032DC94 string=0x000000000032DC9C "h"
 *   insn=0x000000000032DCA0 string=0x000000000032DCA4 "a"
 *   insn=0x000000000032DCA4 string=0x000000000032DCA8 "h.@"
 *   insn=0x000000000032DCA8 string=0x000000000032DCAC "("
 *   insn=0x000000000032DCB4 string=0x000000000032DCB8 "`"
 *   insn=0x000000000032DCD8 string=0x000000000032DCF4 "w!"
 *   insn=0x000000000032DCF4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032DCFC string=0x000000000032DD00 "l%"
 *   insn=0x000000000032DD00 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpawnPointComponent::MergePartialFromCodedStream(
        Caver::Proto::SpawnPointComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  int v9; // w10
  unsigned __int64 v10; // x8
  char *v11; // x9
  unsigned int v12; // w10
  _BYTE *v13; // x9
  int v14; // w11
  Caver::Proto::Vector3 *v15; // x21
  char *v16; // x8
  int v17; // w8
  int v18; // w9
  int v19; // w22
  int v20; // w8
  bool v21; // vf
  int v22; // w8
  __int64 result; // x0
  unsigned int v24; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v25; // [xsp+8h] [xbp-38h]

  v25 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
    do
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
        if ( (unsigned int)v6 >> 3 == 1 )
          break;
        if ( (unsigned int)v6 >> 3 == 2 )
        {
          v8 = v6 & 7;
          if ( v8 == 2 )
          {
            v9 = *((_DWORD *)this + 6);
            goto LABEL_24;
          }
        }
        else
        {
          v8 = v6 & 7;
        }
LABEL_16:
        if ( v8 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v6,
                a3)
            & 1) == 0 )
          return 0;
      }
      v8 = v6 & 7;
      if ( (v6 & 7) != 0 )
        goto LABEL_16;
      v11 = (char *)*((_QWORD *)a2 + 1);
      v10 = *((_QWORD *)a2 + 2);
      if ( (unsigned __int64)v11 >= v10 || *v11 < 0 )
      {
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v24) & 1) == 0 )
          return 0;
        v12 = v24;
        v13 = (_BYTE *)*((_QWORD *)a2 + 1);
        v10 = *((_QWORD *)a2 + 2);
      }
      else
      {
        v12 = (unsigned __int8)*v11;
        v13 = v11 + 1;
        v24 = v12;
        *((_QWORD *)a2 + 1) = v13;
      }
      v14 = *((_DWORD *)this + 6);
      *((_DWORD *)this + 3) = v12;
      v9 = v14 | 1;
      *((_DWORD *)this + 6) = v14 | 1;
    }
    while ( (unsigned __int64)v13 >= v10 || *v13 != 18 );
    *((_QWORD *)a2 + 1) = v13 + 1;
LABEL_24:
    v15 = (Caver::Proto::Vector3 *)*((_QWORD *)this + 2);
    *((_DWORD *)this + 6) = v9 | 2;
    if ( !v15 )
    {
      v15 = (Caver::Proto::Vector3 *)operator new(0x20u);
      Caver::Proto::Vector3::Vector3(v15);
      *((_QWORD *)this + 2) = v15;
    }
    v16 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v16 >= *((_QWORD *)a2 + 2) || *v16 < 0 )
    {
      if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v24) & 1) == 0 )
        return 0;
    }
    else
    {
      v24 = (unsigned __int8)*v16;
      *((_QWORD *)a2 + 1) = v16 + 1;
    }
    v17 = *((_DWORD *)a2 + 14);
    v18 = *((_DWORD *)a2 + 15);
    *((_DWORD *)a2 + 14) = v17 + 1;
    if ( v17 >= v18 )
      return 0;
    v19 = google::protobuf::io::CodedInputStream::PushLimit(a2, v24);
    if ( (Caver::Proto::Vector3::MergePartialFromCodedStream(v15, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
      return 0;
    google::protobuf::io::CodedInputStream::PopLimit(a2, v19);
    v20 = *((_DWORD *)a2 + 14);
    v21 = __OFSUB__(v20, 1);
    v22 = v20 - 1;
    if ( v22 < 0 == v21 )
      *((_DWORD *)a2 + 14) = v22;
    if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
    {
      result = 1;
      *((_DWORD *)a2 + 8) = 0;
      *((_BYTE *)a2 + 36) = 1;
      return result;
    }
  }
}

