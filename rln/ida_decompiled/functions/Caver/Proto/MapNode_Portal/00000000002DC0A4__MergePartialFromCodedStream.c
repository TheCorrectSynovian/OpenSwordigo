/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DC0A4
 * Mangled: _ZN5Caver5Proto14MapNode_Portal27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::MapNode_Portal::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001FBF30  Caver::Proto::MapNode_Portal::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 98
 *   insn=0x00000000002DC0B8 string=0x00000000002DC0BC "U"
 *   insn=0x00000000002DC0BC string=0x00000000002DC0C0 "W "
 *   insn=0x00000000002DC0C0 string=0x00000000002DC0C4 "I "
 *   insn=0x00000000002DC0CC string=0x00000000002DC0D0 ")"
 *   insn=0x00000000002DC0D0 string=0x00000000002DC0D4 "v"
 *   insn=0x00000000002DC0E0 string=0x00000000002DC0E4 "8a"
 *   insn=0x00000000002DC0E8 string=0x00000000002DC0EC "h"
 *   insn=0x00000000002DC0F0 string=0x00000000002DC0F4 """
 *   insn=0x00000000002DC0F4 string=0x00000000002DC0F8 "\t"
 *   insn=0x00000000002DC0FC string=0x00000000002DC100 "!"
 *   insn=0x00000000002DC100 string=0x00000000002DC104 ""
 *   insn=0x00000000002DC104 string=0x00000000002DC108 "a""
 *   insn=0x00000000002DC108 string=0x00000000002DC10C "h"
 *   insn=0x00000000002DC110 string=0x00000000002DC12C "(|"
 *   insn=0x00000000002DC118 string=0x00000000002DC11C "In"
 *   insn=0x00000000002DC11C string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002DC120 string=0x00000000002DC124 "a""
 *   insn=0x00000000002DC12C string=0x00000000002DC130 ""
 *   insn=0x00000000002DC134 string=0x00000000002DC138 "("
 *   insn=0x00000000002DC138 string=0x00000000002DC33C "("
 *   insn=0x00000000002DC13C string=0x00000000002DC140 ""
 *   insn=0x00000000002DC144 string=0x00000000002DC148 "("
 *   insn=0x00000000002DC144 string=0x00000000002DC1D0 "("
 *   insn=0x00000000002DC144 string=0x00000000002DC258 "("
 *   insn=0x00000000002DC144 string=0x00000000002DC2B0 "("
 *   insn=0x00000000002DC158 string=0x00000000002DC15C ""
 *   insn=0x00000000002DC15C string=0x00000000002DC160 "?"
 *   insn=0x00000000002DC170 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002DC174 string=0x00000000002DC178 "8"
 *   insn=0x00000000002DC184 string=0x00000000002DC188 "`"
 *   insn=0x00000000002DC184 string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002DC188 string=0x00000000002DC18C "h"
 *   insn=0x00000000002DC194 string=0x00000000002DC198 "\n"
 *   insn=0x00000000002DC198 string=0x00000000002DC19C "_A"
 *   insn=0x00000000002DC19C string=0x00000000002DC1A0 "a"
 *   insn=0x00000000002DC1A0 string=0x00000000002DC1A4 ""
 *   insn=0x00000000002DC1A4 string=0x00000000002DC1A8 "h"
 *   insn=0x00000000002DC1B0 string=0x00000000002DC1B4 "\t"
 *   insn=0x00000000002DC1B4 string=0x00000000002DC1B8 "i"
 *   insn=0x00000000002DC1B8 string=0x00000000002DC1BC ")"
 *   insn=0x00000000002DC1BC string=0x00000000002DC1C0 ""
 *   insn=0x00000000002DC1C4 string=0x00000000002DC1C8 "h"
 *   insn=0x00000000002DC1C8 string=0x00000000002DC1CC "C"
 *   insn=0x00000000002DC1CC string=0x00000000002DC2D8 "("
 *   insn=0x00000000002DC1D0 string=0x00000000002DC1D4 "a"
 *   insn=0x00000000002DC1D4 string=0x00000000002DC1D8 "h"
 *   insn=0x00000000002DC1E0 string=0x00000000002DC1E4 "\t"
 *   insn=0x00000000002DC1E8 string=0x00000000002DC1EC ")"
 *   insn=0x00000000002DC1EC string=0x00000000002DC1F0 ""
 *   insn=0x00000000002DC1F4 string=0x00000000002DC1F8 "h"
 *   insn=0x00000000002DC1F8 string=0x00000000002DC1FC "?\t"
 *   insn=0x00000000002DC200 string=0x00000000002DC214 "i"
 *   insn=0x00000000002DC208 string=0x00000000002DC20C ""
 *   insn=0x00000000002DC214 string=0x00000000002DC218 "?"
 *   insn=0x00000000002DC21C string=0x00000000002DC220 "*"
 *   insn=0x00000000002DC220 string=0x00000000002DC224 "_"
 *   insn=0x00000000002DC224 string=0x00000000002DC228 "!"
 *   insn=0x00000000002DC228 string=0x00000000002DC22C "*"
 *   insn=0x00000000002DC22C string=0x00000000002DC230 "j"
 *   insn=0x00000000002DC230 string=0x00000000002DC234 "_"
 *   insn=0x00000000002DC238 string=0x00000000002DC23C "I"
 *   insn=0x00000000002DC23C string=0x00000000002DC240 "i"
 *   insn=0x00000000002DC240 string=0x00000000002DC244 ")"
 *   insn=0x00000000002DC244 string=0x00000000002DC248 "J"
 *   insn=0x00000000002DC24C string=0x00000000002DC250 "j"
 *   insn=0x00000000002DC258 string=0x00000000002DC25C "!"
 *   insn=0x00000000002DC25C string=0x00000000002DC260 "j"
 *   insn=0x00000000002DC260 string=0x00000000002DC264 "_"
 *   insn=0x00000000002DC270 string=0x00000000002DC274 "ws"
 *   insn=0x00000000002DC274 string=0x00000000001F9050 "0'"
 *   insn=0x00000000002DC27C string=0x00000000002DC280 "j"
 *   insn=0x00000000002DC284 string=0x00000000002DC288 "?"
 *   insn=0x00000000002DC290 string=0x00000000002DC294 "i"
 *   insn=0x00000000002DC294 string=0x00000000002DC298 "_"
 *   insn=0x00000000002DC29C string=0x00000000002DC2A0 "a"
 *   insn=0x00000000002DC2A0 string=0x00000000002DC2A4 "h.@"
 *   insn=0x00000000002DC2A4 string=0x00000000002DC2A8 "("
 *   insn=0x00000000002DC2A8 string=0x00000000002DC2AC "7"
 *   insn=0x00000000002DC2B0 string=0x00000000002DC2B4 "a"
 *   insn=0x00000000002DC2B4 string=0x00000000002DC2B8 "h"
 *   insn=0x00000000002DC2C8 string=0x00000000002DC2CC "as"
 *   insn=0x00000000002DC2CC string=0x00000000002DC2D0 " "
 *   insn=0x00000000002DC2E0 string=0x00000000002DC2F4 "h"
 *   insn=0x00000000002DC2E8 string=0x00000000002DC2EC ""
 *   insn=0x00000000002DC2FC string=0x00000000002DC300 "\n"
 *   insn=0x00000000002DC300 string=0x00000000002DC304 "_a"
 *   insn=0x00000000002DC304 string=0x00000000002DC308 "!"
 *   insn=0x00000000002DC308 string=0x00000000002DC30C ""
 *   insn=0x00000000002DC30C string=0x00000000002DC310 "h"
 *   insn=0x00000000002DC314 string=0x00000000002DC318 "c"
 *   insn=0x00000000002DC320 string=0x00000000002DC324 "Ks"
 *   insn=0x00000000002DC324 string=0x00000000002DC328 "`"
 *   insn=0x00000000002DC32C string=0x00000000002DC330 "?\t"
 *   insn=0x00000000002DC348 string=0x00000000002DC34C "a"
 *   insn=0x00000000002DC34C string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002DC368 string=0x00000000002DC36C "a"
 *   insn=0x00000000002DC38C string=0x00000000002DC390 "`"
 *   insn=0x00000000002DC398 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MapNode_Portal::MergePartialFromCodedStream(
        Caver::Proto::MapNode_Portal *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  __int64 *v9; // x1
  _QWORD *v10; // x0
  _BYTE *v11; // x8
  unsigned __int64 v12; // x9
  char *v13; // x8
  unsigned int v14; // w9
  char *v15; // x8
  unsigned int v16; // w9
  int v17; // w8
  unsigned __int64 v18; // x8
  _BYTE *v19; // x9
  char *v20; // x10
  unsigned int v21; // w9
  unsigned __int8 *v22; // x10
  int v23; // w11
  int v24; // w8
  _BYTE *v25; // x8
  unsigned __int64 v26; // x9
  __int64 result; // x0
  unsigned int v28; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v29; // [xsp+8h] [xbp-38h]

  v29 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
        if ( v8 != 2 )
          goto LABEL_47;
        v9 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 9) |= 1u;
        if ( v9 == &Caver::Proto::MapNode_Portal::_default_destination_name_ )
        {
          v10 = (_QWORD *)operator new(8u);
          *v10 = &byte_6FD2F8;
          *((_QWORD *)this + 2) = v10;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v11 = (_BYTE *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v11 >= v12 || *v11 != 16 )
          continue;
        v13 = v11 + 1;
        *((_QWORD *)a2 + 1) = v13;
        if ( (unsigned __int64)v13 >= v12 )
          goto LABEL_36;
        goto LABEL_15;
      case 2u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_47;
        v13 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v13 >= *((_QWORD *)a2 + 2) )
          goto LABEL_36;
LABEL_15:
        if ( *v13 < 0 )
        {
LABEL_36:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v28) & 1) == 0 )
            return 0;
          v14 = v28;
        }
        else
        {
          v14 = (unsigned __int8)*v13;
          v28 = v14;
          *((_QWORD *)a2 + 1) = v13 + 1;
        }
        if ( v14 - 1 <= 7 )
        {
          v24 = *((_DWORD *)this + 9);
          *((_DWORD *)this + 6) = v14;
          *((_DWORD *)this + 9) = v24 | 2;
        }
        v25 = (_BYTE *)*((_QWORD *)a2 + 1);
        v26 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v25 >= v26 || *v25 != 24 )
          continue;
        v15 = v25 + 1;
        *((_QWORD *)a2 + 1) = v15;
        if ( (unsigned __int64)v15 >= v26 )
          goto LABEL_43;
LABEL_19:
        if ( (*v15 & 0x80000000) == 0 )
        {
          v16 = (unsigned __int8)*v15;
          v28 = v16;
          *((_QWORD *)a2 + 1) = v15 + 1;
          if ( v16 > 2 )
            goto LABEL_22;
LABEL_21:
          v17 = *((_DWORD *)this + 9);
          *((_DWORD *)this + 7) = v16;
          *((_DWORD *)this + 9) = v17 | 4;
          goto LABEL_22;
        }
LABEL_43:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v28) & 1) == 0 )
          return 0;
        v16 = v28;
        if ( v28 <= 2 )
          goto LABEL_21;
LABEL_22:
        v19 = (_BYTE *)*((_QWORD *)a2 + 1);
        v18 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v19 >= v18 || *v19 != 32 )
          continue;
        v20 = v19 + 1;
        *((_QWORD *)a2 + 1) = v19 + 1;
        if ( (unsigned __int64)(v19 + 1) >= v18 )
          goto LABEL_29;
LABEL_25:
        if ( *v20 < 0 )
        {
LABEL_29:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v28) & 1) == 0 )
            return 0;
          v21 = v28;
          v22 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
          v18 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v21 = (unsigned __int8)*v20;
          v22 = (unsigned __int8 *)(v20 + 1);
          v28 = v21;
          *((_QWORD *)a2 + 1) = v22;
        }
        v23 = *((_DWORD *)this + 9);
        *((_BYTE *)this + 32) = v21 != 0;
        *((_DWORD *)this + 9) = v23 | 8;
        if ( v22 == (unsigned __int8 *)v18 && *((_DWORD *)a2 + 11) )
        {
          result = 1;
          *((_DWORD *)a2 + 8) = 0;
          *((_BYTE *)a2 + 36) = 1;
          return result;
        }
        break;
      case 3u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_47;
        v15 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v15 < *((_QWORD *)a2 + 2) )
          goto LABEL_19;
        goto LABEL_43;
      case 4u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_47;
        v20 = (char *)*((_QWORD *)a2 + 1);
        v18 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v20 >= v18 )
          goto LABEL_29;
        goto LABEL_25;
      default:
        v8 = v6 & 7;
LABEL_47:
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

