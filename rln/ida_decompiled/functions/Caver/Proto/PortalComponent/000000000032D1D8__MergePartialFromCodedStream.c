/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032D1D8
 * Mangled: _ZN5Caver5Proto15PortalComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::PortalComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 86
 *   insn=0x000000000032D1F0 string=0x000000000032D1F4 "U"
 *   insn=0x000000000032D210 string=0x000000000032D214 "ZSA"
 *   insn=0x000000000032D228 string=0x000000000032D22C "h"
 *   insn=0x000000000032D230 string=0x000000000032D234 """
 *   insn=0x000000000032D234 string=0x000000000032D238 "\t"
 *   insn=0x000000000032D23C string=0x000000000032D240 "!"
 *   insn=0x000000000032D240 string=0x000000000032D244 ""
 *   insn=0x000000000032D244 string=0x000000000032D248 "a""
 *   insn=0x000000000032D248 string=0x000000000032D24C "h"
 *   insn=0x000000000032D250 string=0x000000000032D26C "(|"
 *   insn=0x000000000032D25C string=0x00000000001F7A40 "0'"
 *   insn=0x000000000032D260 string=0x000000000032D264 "a""
 *   insn=0x000000000032D264 string=0x000000000032D268 "A"
 *   insn=0x000000000032D26C string=0x000000000032D270 ""
 *   insn=0x000000000032D278 string=0x000000000032D450 "("
 *   insn=0x000000000032D27C string=0x000000000032D280 ""
 *   insn=0x000000000032D284 string=0x000000000032D288 "("
 *   insn=0x000000000032D284 string=0x000000000032D2F0 "("
 *   insn=0x000000000032D284 string=0x000000000032D320 "("
 *   insn=0x000000000032D284 string=0x000000000032D350 "("
 *   insn=0x000000000032D28C string=0x000000000032D290 "!"
 *   insn=0x000000000032D298 string=0x000000000032D29C ""
 *   insn=0x000000000032D29C string=0x000000000032D2A0 "?"
 *   insn=0x000000000032D2B0 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032D2B4 string=0x000000000032D2B8 "9"
 *   insn=0x000000000032D2C0 string=0x000000000032D2C4 "C1"
 *   insn=0x000000000032D2C4 string=0x00000000001F97D0 "0'"
 *   insn=0x000000000032D2C8 string=0x000000000032D2CC "h"
 *   insn=0x000000000032D2D4 string=0x000000000032D2D8 "\t"
 *   insn=0x000000000032D2D8 string=0x000000000032D2DC "?I"
 *   insn=0x000000000032D2DC string=0x000000000032D2E0 "a"
 *   insn=0x000000000032D2E0 string=0x000000000032D2E4 ""
 *   insn=0x000000000032D2E4 string=0x000000000032D2E8 "h"
 *   insn=0x000000000032D2F4 string=0x000000000032D2F8 "i"
 *   insn=0x000000000032D2F8 string=0x000000000032D2FC "?"
 *   insn=0x000000000032D300 string=0x000000000032D304 "*"
 *   insn=0x000000000032D308 string=0x000000000032D30C "J"
 *   insn=0x000000000032D30C string=0x000000000032D310 ")"
 *   insn=0x000000000032D314 string=0x000000000032D318 "i"
 *   insn=0x000000000032D318 string=0x000000000032D31C "/"
 *   insn=0x000000000032D324 string=0x000000000032D328 "i"
 *   insn=0x000000000032D328 string=0x000000000032D32C "?"
 *   insn=0x000000000032D32C string=0x000000000032D330 """
 *   insn=0x000000000032D330 string=0x000000000032D334 "*"
 *   insn=0x000000000032D338 string=0x000000000032D33C "J"
 *   insn=0x000000000032D33C string=0x000000000032D340 ")"
 *   insn=0x000000000032D344 string=0x000000000032D348 "i"
 *   insn=0x000000000032D348 string=0x000000000032D34C "8"
 *   insn=0x000000000032D360 string=0x000000000032D364 ""
 *   insn=0x000000000032D364 string=0x000000000032D368 "?"
 *   insn=0x000000000032D37C string=0x000000000032D380 "c"
 *   insn=0x000000000032D380 string=0x000000000032D384 "("
 *   insn=0x000000000032D394 string=0x000000000032D398 "i"
 *   insn=0x000000000032D398 string=0x000000000032D39C "?"
 *   insn=0x000000000032D39C string=0x000000000032D3A0 "b"
 *   insn=0x000000000032D3A0 string=0x000000000032D3A4 "*"
 *   insn=0x000000000032D3A4 string=0x000000000032D3A8 "_a"
 *   insn=0x000000000032D3AC string=0x000000000032D3B0 ")"
 *   insn=0x000000000032D3B0 string=0x000000000032D3B4 "i"
 *   insn=0x000000000032D3B4 string=0x000000000032D3B8 "?"
 *   insn=0x000000000032D3B8 string=0x000000000032D3BC "C"
 *   insn=0x000000000032D3C4 string=0x000000000032D3C8 ""/"
 *   insn=0x000000000032D3C8 string=0x00000000001F9050 "0'"
 *   insn=0x000000000032D3D0 string=0x000000000032D3D4 "i"
 *   insn=0x000000000032D3D8 string=0x000000000032D3DC "_"
 *   insn=0x000000000032D3E4 string=0x000000000032D3E8 "j"
 *   insn=0x000000000032D3E8 string=0x000000000032D3EC "?"
 *   insn=0x000000000032D3F4 string=0x000000000032D3F8 "*"
 *   insn=0x000000000032D3F8 string=0x000000000032D3FC "_"
 *   insn=0x000000000032D3FC string=0x000000000032D400 "a"
 *   insn=0x000000000032D400 string=0x000000000032D404 ")"
 *   insn=0x000000000032D404 string=0x000000000032D408 "i"
 *   insn=0x000000000032D408 string=0x000000000032D40C "?"
 *   insn=0x000000000032D40C string=0x000000000032D410 "#"
 *   insn=0x000000000032D418 string=0x000000000032D41C "/"
 *   insn=0x000000000032D41C string=0x000000000032D420 "@"
 *   insn=0x000000000032D424 string=0x000000000032D428 "i"
 *   insn=0x000000000032D430 string=0x000000000032D434 "?"
 *   insn=0x000000000032D434 string=0x000000000032D438 "j"
 *   insn=0x000000000032D43C string=0x000000000032D440 "a"
 *   insn=0x000000000032D440 string=0x000000000032D444 "h.@"
 *   insn=0x000000000032D444 string=0x000000000032D448 "("
 *   insn=0x000000000032D460 string=0x000000000032D464 "@"
 *   insn=0x000000000032D460 string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000032D4A4 string=0x000000000032D4A8 "`"
 *   insn=0x000000000032D4B0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PortalComponent::MergePartialFromCodedStream(
        Caver::Proto::PortalComponent *this,
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
  unsigned __int64 v12; // x8
  char *v13; // x9
  unsigned int v14; // w10
  _BYTE *v15; // x9
  char *v16; // x9
  unsigned int v17; // w10
  unsigned __int8 *v18; // x9
  __int64 *v19; // x1
  _QWORD *v20; // x0
  _BYTE *v21; // x9
  int v22; // w11
  int v23; // w11
  __int64 result; // x0
  unsigned int v25; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v26; // [xsp+8h] [xbp-48h]

  v26 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
          goto LABEL_41;
        v9 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 9) |= 2u;
        if ( v9 == &Caver::Proto::PortalComponent::_default_destination_scene_name_ )
        {
          v10 = (_QWORD *)operator new(8u);
          *v10 = &byte_6FD2F8;
          *((_QWORD *)this + 2) = v10;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v11 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v11 >= *((_QWORD *)a2 + 2) || *v11 != 18 )
          continue;
        *((_QWORD *)a2 + 1) = v11 + 1;
        goto LABEL_24;
      case 2u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_41;
LABEL_24:
        v19 = (__int64 *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 9) |= 4u;
        if ( v19 == &Caver::Proto::PortalComponent::_default_spawn_point_name_ )
        {
          v20 = (_QWORD *)operator new(8u);
          *v20 = &byte_6FD2F8;
          *((_QWORD *)this + 3) = v20;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v21 = (_BYTE *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v21 >= v12 || *v21 != 24 )
          continue;
        v13 = v21 + 1;
        *((_QWORD *)a2 + 1) = v13;
        if ( (unsigned __int64)v13 >= v12 )
          goto LABEL_30;
LABEL_17:
        if ( *v13 < 0 )
        {
LABEL_30:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v25) & 1) == 0 )
            return 0;
          v14 = v25;
          v15 = (_BYTE *)*((_QWORD *)a2 + 1);
          v12 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v14 = (unsigned __int8)*v13;
          v15 = v13 + 1;
          v25 = v14;
          *((_QWORD *)a2 + 1) = v15;
        }
        v22 = *((_DWORD *)this + 9);
        *((_BYTE *)this + 32) = v14 != 0;
        *((_DWORD *)this + 9) = v22 | 8;
        if ( (unsigned __int64)v15 >= v12 || *v15 != 32 )
          continue;
        v16 = v15 + 1;
        *((_QWORD *)a2 + 1) = v16;
        if ( (unsigned __int64)v16 >= v12 )
          goto LABEL_35;
LABEL_21:
        if ( *v16 < 0 )
        {
LABEL_35:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v25) & 1) == 0 )
            return 0;
          v17 = v25;
          v18 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
          v12 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v17 = (unsigned __int8)*v16;
          v18 = (unsigned __int8 *)(v16 + 1);
          v25 = v17;
          *((_QWORD *)a2 + 1) = v18;
        }
        v23 = *((_DWORD *)this + 9);
        *((_DWORD *)this + 3) = v17;
        *((_DWORD *)this + 9) = v23 | 1;
        if ( v18 == (unsigned __int8 *)v12 && *((_DWORD *)a2 + 11) )
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
          goto LABEL_41;
        v13 = (char *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v13 < v12 )
          goto LABEL_17;
        goto LABEL_30;
      case 4u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_41;
        v16 = (char *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v16 < v12 )
          goto LABEL_21;
        goto LABEL_35;
      default:
        v8 = v6 & 7;
LABEL_41:
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

