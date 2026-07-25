/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030DB18
 * Mangled: _ZN5Caver5Proto15HealthComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::HealthComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5710  Caver::Proto::Vector2::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x000000000030DDF8  Caver::Proto::HealthComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 88
 *   insn=0x000000000030DB2C string=0x000000000030DB30 "W"
 *   insn=0x000000000030DB40 string=0x000000000030DB44 "h"
 *   insn=0x000000000030DB48 string=0x000000000030DB4C """
 *   insn=0x000000000030DB4C string=0x000000000030DB50 "\t"
 *   insn=0x000000000030DB54 string=0x000000000030DB58 "!"
 *   insn=0x000000000030DB58 string=0x000000000030DB5C ""
 *   insn=0x000000000030DB5C string=0x000000000030DB60 "a""
 *   insn=0x000000000030DB60 string=0x000000000030DB64 "h"
 *   insn=0x000000000030DB68 string=0x000000000030DB84 "(|"
 *   insn=0x000000000030DB74 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000030DB78 string=0x000000000030DB7C "a""
 *   insn=0x000000000030DB8C string=0x000000000030DC64 "("
 *   insn=0x000000000030DB94 string=0x000000000030DBB0 "("
 *   insn=0x000000000030DB9C string=0x000000000030DBA0 "("
 *   insn=0x000000000030DB9C string=0x000000000030DC94 "("
 *   insn=0x000000000030DBA4 string=0x000000000030DBA8 "`"
 *   insn=0x000000000030DBA8 string=0x000000000030DBAC ";"
 *   insn=0x000000000030DBB0 string=0x000000000030DBB4 "!"
 *   insn=0x000000000030DBB4 string=0x000000000030DBB8 "i"
 *   insn=0x000000000030DBB8 string=0x000000000030DBBC "?"
 *   insn=0x000000000030DBC0 string=0x000000000030DBC4 "("
 *   insn=0x000000000030DBC8 string=0x000000000030DBCC ""
 *   insn=0x000000000030DBCC string=0x000000000030DBD0 ")"
 *   insn=0x000000000030DBD4 string=0x000000000030DBD8 "i"
 *   insn=0x000000000030DBE0 string=0x000000000030DBF4 "h"
 *   insn=0x000000000030DBE8 string=0x000000000030DBEC ")"
 *   insn=0x000000000030DBF8 string=0x000000000030DBFC "B"
 *   insn=0x000000000030DBFC string=0x000000000030DC00 "\t"
 *   insn=0x000000000030DC00 string=0x000000000030DC04 "?i"
 *   insn=0x000000000030DC08 string=0x000000000030DC0C ""
 *   insn=0x000000000030DC0C string=0x000000000030DC10 "h"
 *   insn=0x000000000030DC18 string=0x000000000030DC1C ""
 *   insn=0x000000000030DC24 string=0x000000000030DC3C "h"
 *   insn=0x000000000030DC28 string=0x000000000030DC2C "m"
 *   insn=0x000000000030DC2C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000030DC30 string=0x000000000030DC34 "'"
 *   insn=0x000000000030DC34 string=0x00000000001F7CD0 "0'"
 *   insn=0x000000000030DC40 string=0x000000000030DC44 "b"
 *   insn=0x000000000030DC44 string=0x000000000030DC48 "\t"
 *   insn=0x000000000030DC48 string=0x000000000030DC4C ")"
 *   insn=0x000000000030DC4C string=0x000000000030DC50 ")"
 *   insn=0x000000000030DC50 string=0x000000000030DC54 ""
 *   insn=0x000000000030DC58 string=0x000000000030DC5C "h"
 *   insn=0x000000000030DC60 string=0x000000000030DCC0 "h&G)\n"
 *   insn=0x000000000030DC68 string=0x000000000030DC6C "i"
 *   insn=0x000000000030DC6C string=0x000000000030DC70 "?"
 *   insn=0x000000000030DC74 string=0x000000000030DC78 "*"
 *   insn=0x000000000030DC7C string=0x000000000030DC80 "J"
 *   insn=0x000000000030DC80 string=0x000000000030DC84 ")"
 *   insn=0x000000000030DC88 string=0x000000000030DC8C "i"
 *   insn=0x000000000030DC8C string=0x000000000030DC90 "."
 *   insn=0x000000000030DCA0 string=0x000000000030DCA4 ""
 *   insn=0x000000000030DCA4 string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000030DCA8 string=0x000000000030DCAC ">"
 *   insn=0x000000000030DCB8 string=0x000000000030DCBC "@"
 *   insn=0x000000000030DCB8 string=0x00000000001F9050 "0'"
 *   insn=0x000000000030DCC0 string=0x000000000030DCC4 "\n"
 *   insn=0x000000000030DCC8 string=0x000000000030DCCC "j:"
 *   insn=0x000000000030DCD8 string=0x000000000030DCDC ")"
 *   insn=0x000000000030DCEC string=0x00000000001F5710 "P'"
 *   insn=0x000000000030DCF0 string=0x000000000030DCF4 "h"
 *   insn=0x000000000030DCF4 string=0x000000000030DCF8 "h"
 *   insn=0x000000000030DD00 string=0x000000000030DD04 "C"
 *   insn=0x000000000030DD04 string=0x000000000030DD08 "h:@"
 *   insn=0x000000000030DD08 string=0x000000000030DD0C ""
 *   insn=0x000000000030DD0C string=0x000000000030DD10 "K"
 *   insn=0x000000000030DD10 string=0x000000000030DD14 "h:"
 *   insn=0x000000000030DD10 string=0x000000000030DD18 "h"
 *   insn=0x000000000030DD1C string=0x000000000030DD20 "!"
 *   insn=0x000000000030DD20 string=0x000000000030DD24 "h.@"
 *   insn=0x000000000030DD28 string=0x000000000030DD2C ")"
 *   insn=0x000000000030DD38 string=0x000000000030DD3C "@"
 *   insn=0x000000000030DD40 string=0x000000000030DD44 "i"
 *   insn=0x000000000030DD4C string=0x000000000030DD50 "?"
 *   insn=0x000000000030DD50 string=0x000000000030DD54 "j"
 *   insn=0x000000000030DD58 string=0x000000000030DD5C "B"
 *   insn=0x000000000030DD5C string=0x000000000030DD60 "*"
 *   insn=0x000000000030DD60 string=0x000000000030DD64 "_A"
 *   insn=0x000000000030DD68 string=0x000000000030DD6C ")"
 *   insn=0x000000000030DD6C string=0x000000000030DD70 "i"
 *   insn=0x000000000030DD70 string=0x000000000030DD74 "?"
 *   insn=0x000000000030DD74 string=0x000000000030DD78 "c"
 *   insn=0x000000000030DDB0 string=0x000000000030DDB4 "a"
 *   insn=0x000000000030DDB4 string=0x000000000030DDE0 "<"
 *   insn=0x000000000030DDD4 string=0x000000000030DDD8 "`"
 *   insn=0x000000000030DDE0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000030DDE8 string=0x000000000030DDEC "1"
 *   insn=0x000000000030DDEC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::HealthComponent::MergePartialFromCodedStream(
        Caver::Proto::HealthComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  unsigned int v8; // w8
  int v9; // w8
  char *v10; // x9
  unsigned int v11; // w8
  int v12; // w9
  _BYTE *v13; // x8
  Caver::Proto::Vector2 *v14; // x21
  char *v15; // x8
  unsigned __int64 v16; // x8
  char *v17; // x9
  unsigned int v18; // w10
  _BYTE *v19; // x9
  int v20; // w8
  int v21; // w9
  int v22; // w22
  int v23; // w8
  bool v24; // vf
  int v25; // w8
  int v26; // w11
  __int64 result; // x0
  unsigned int v28; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v29; // [xsp+8h] [xbp-38h]

  v29 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
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
          goto LABEL_30;
        v17 = (char *)*((_QWORD *)a2 + 1);
        v16 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v17 >= v16 || *v17 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v28) & 1) == 0 )
            return 0;
          v18 = v28;
          v19 = (_BYTE *)*((_QWORD *)a2 + 1);
          v16 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v18 = (unsigned __int8)*v17;
          v19 = v17 + 1;
          v28 = v18;
          *((_QWORD *)a2 + 1) = v19;
        }
        v26 = *((_DWORD *)this + 8);
        *((_DWORD *)this + 3) = v18;
        *((_DWORD *)this + 8) = v26 | 1;
        if ( (unsigned __int64)v19 < v16 && *v19 == 16 )
        {
          v10 = v19 + 1;
          *((_QWORD *)a2 + 1) = v10;
          if ( (unsigned __int64)v10 >= v16 )
            goto LABEL_47;
          goto LABEL_14;
        }
      }
      if ( v8 != 2 )
        break;
      v9 = v6 & 7;
      if ( (v6 & 7) != 0 )
      {
LABEL_30:
        if ( v9 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v6,
                a3)
            & 1) == 0 )
          return 0;
      }
      else
      {
        v10 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v10 >= *((_QWORD *)a2 + 2) )
          goto LABEL_47;
LABEL_14:
        if ( (*v10 & 0x80000000) == 0 )
        {
          v11 = (unsigned __int8)*v10;
          v28 = v11;
          *((_QWORD *)a2 + 1) = v10 + 1;
          if ( v11 > 1 )
            goto LABEL_17;
          goto LABEL_16;
        }
LABEL_47:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v28) & 1) == 0 )
          return 0;
        v11 = v28;
        if ( v28 > 1 )
          goto LABEL_17;
LABEL_16:
        v12 = *((_DWORD *)this + 8);
        *((_DWORD *)this + 4) = v11;
        *((_DWORD *)this + 8) = v12 | 2;
LABEL_17:
        v13 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v13 < *((_QWORD *)a2 + 2) && *v13 == 26 )
        {
          *((_QWORD *)a2 + 1) = v13 + 1;
          goto LABEL_20;
        }
      }
    }
    if ( v8 != 3 )
    {
      v9 = v6 & 7;
      goto LABEL_30;
    }
    v9 = v6 & 7;
    if ( v9 != 2 )
      goto LABEL_30;
LABEL_20:
    v14 = (Caver::Proto::Vector2 *)*((_QWORD *)this + 3);
    *((_DWORD *)this + 8) |= 4u;
    if ( !v14 )
    {
      v14 = (Caver::Proto::Vector2 *)operator new(0x18u);
      Caver::Proto::Vector2::Vector2(v14);
      *((_QWORD *)this + 3) = v14;
    }
    v15 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v15 >= *((_QWORD *)a2 + 2) || *v15 < 0 )
    {
      if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v28) & 1) == 0 )
        return 0;
    }
    else
    {
      v28 = (unsigned __int8)*v15;
      *((_QWORD *)a2 + 1) = v15 + 1;
    }
    v20 = *((_DWORD *)a2 + 14);
    v21 = *((_DWORD *)a2 + 15);
    *((_DWORD *)a2 + 14) = v20 + 1;
    if ( v20 >= v21 )
      return 0;
    v22 = google::protobuf::io::CodedInputStream::PushLimit(a2, v28);
    if ( (Caver::Proto::Vector2::MergePartialFromCodedStream(v14, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
      return 0;
    google::protobuf::io::CodedInputStream::PopLimit(a2, v22);
    v23 = *((_DWORD *)a2 + 14);
    v24 = __OFSUB__(v23, 1);
    v25 = v23 - 1;
    if ( v25 < 0 == v24 )
      *((_DWORD *)a2 + 14) = v25;
    if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
    {
      result = 1;
      *((_DWORD *)a2 + 8) = 0;
      *((_BYTE *)a2 + 36) = 1;
      return result;
    }
  }
}

