/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DF2C8
 * Mangled: _ZN5Caver5Proto3Map27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::Map::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000201530  Caver::Proto::MapZone::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *
 * Referenced strings: 66
 *   insn=0x00000000002DF2E4 string=0x00000000002DF2E8 "H "
 *   insn=0x00000000002DF2E8 string=0x00000000002DF2EC ") "
 *   insn=0x00000000002DF2EC string=0x00000000002DF2F0 "X"
 *   insn=0x00000000002DF2F0 string=0x00000000002DF2F4 "5A"
 *   insn=0x00000000002DF2F4 string=0x00000000002DF2F8 ")"
 *   insn=0x00000000002DF2F8 string=0x00000000002DF2FC "K "
 *   insn=0x00000000002DF2FC string=0x00000000002DF300 "\n"
 *   insn=0x00000000002DF300 string=0x00000000002DF304 "k"
 *   insn=0x00000000002DF304 string=0x00000000002DF308 " "
 *   insn=0x00000000002DF308 string=0x00000000002DF30C "; "
 *   insn=0x00000000002DF310 string=0x00000000002DF314 "`"
 *   insn=0x00000000002DF31C string=0x00000000002DF320 "{"
 *   insn=0x00000000002DF330 string=0x00000000002DF334 "h"
 *   insn=0x00000000002DF338 string=0x00000000002DF33C """
 *   insn=0x00000000002DF33C string=0x00000000002DF340 "\t"
 *   insn=0x00000000002DF344 string=0x00000000002DF348 "!"
 *   insn=0x00000000002DF348 string=0x00000000002DF34C ""
 *   insn=0x00000000002DF34C string=0x00000000002DF350 "a""
 *   insn=0x00000000002DF350 string=0x00000000002DF354 "h"
 *   insn=0x00000000002DF354 string=0x00000000002DF358 "?H"
 *   insn=0x00000000002DF358 string=0x00000000002DF35C "@"
 *   insn=0x00000000002DF35C string=0x00000000002DF360 "a"
 *   insn=0x00000000002DF360 string=0x00000000002DF364 "("
 *   insn=0x00000000002DF370 string=0x00000000002DF374 "Wy"
 *   insn=0x00000000002DF374 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002DF378 string=0x00000000002DF37C "_"
 *   insn=0x00000000002DF384 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002DF388 string=0x00000000002DF38C "a""
 *   insn=0x00000000002DF38C string=0x00000000002DF390 "?H"
 *   insn=0x00000000002DF390 string=0x00000000002DF394 "a"
 *   insn=0x00000000002DF39C string=0x00000000002DF3A0 "h"
 *   insn=0x00000000002DF3C0 string=0x00000000002DF3C4 ""
 *   insn=0x00000000002DF3C4 string=0x00000000002DF430 "h"
 *   insn=0x00000000002DF3D0 string=0x00000000002DF3E4 ""
 *   insn=0x00000000002DF3D8 string=0x00000000002DF3DC "Qn"
 *   insn=0x00000000002DF3DC string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002DF3EC string=0x00000000002DF3F0 "|X"
 *   insn=0x00000000002DF3F0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002DF438 string=0x00000000002DF43C "\t"
 *   insn=0x00000000002DF440 string=0x00000000002DF444 ")"
 *   insn=0x00000000002DF444 string=0x00000000002DF448 ""
 *   insn=0x00000000002DF44C string=0x00000000002DF450 "h"
 *   insn=0x00000000002DF454 string=0x00000000002DF468 "h&G)\n"
 *   insn=0x00000000002DF460 string=0x00000000001F9050 "0'"
 *   insn=0x00000000002DF468 string=0x00000000002DF46C "\n"
 *   insn=0x00000000002DF470 string=0x00000000002DF474 "j:"
 *   insn=0x00000000002DF474 string=0x00000000002DF478 "\n"
 *   insn=0x00000000002DF480 string=0x00000000002DF484 "?"
 *   insn=0x00000000002DF490 string=0x00000000002DF494 "'"
 *   insn=0x00000000002DF498 string=0x00000000002DF49C "h"
 *   insn=0x00000000002DF4A8 string=0x00000000002DF4AC "Y"
 *   insn=0x00000000002DF4AC string=0x00000000002DF4B0 "h:@"
 *   insn=0x00000000002DF4B0 string=0x00000000002DF4B4 ""
 *   insn=0x00000000002DF4B4 string=0x00000000002DF4B8 "K"
 *   insn=0x00000000002DF4B8 string=0x00000000002DF4BC "h:"
 *   insn=0x00000000002DF4B8 string=0x00000000002DF4C0 "h"
 *   insn=0x00000000002DF4C8 string=0x00000000002DF4CC "\n"
 *   insn=0x00000000002DF4CC string=0x00000000002DF4D0 "_I"
 *   insn=0x00000000002DF4D0 string=0x00000000002DF4D4 "@"
 *   insn=0x00000000002DF4D4 string=0x00000000002DF39C ""
 *   insn=0x00000000002DF4DC string=0x00000000002DF4E0 "h.@"
 *   insn=0x00000000002DF4EC string=0x00000000002DF4F0 "`"
 *   insn=0x00000000002DF4F4 string=0x00000000002DF4FC ""
 *   insn=0x00000000002DF504 string=0x00000000002DF508 "a"
 *   insn=0x00000000002DF508 string=0x00000000002DF534 "g["
 *   insn=0x00000000002DF534 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Map::MergePartialFromCodedStream(
        Caver::Proto::Map *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  __int128 v3; // q0
  google::protobuf::internal::RepeatedPtrFieldBase *v6; // x21
  char *v7; // x8
  unsigned __int64 v8; // x1
  unsigned int TagFallback; // w0
  int v10; // w8
  int v11; // w23
  __int64 v12; // x8
  __int64 v13; // x22
  __int64 v14; // x8
  char *v15; // x8
  int v16; // w8
  int v17; // w9
  int v18; // w23
  int v19; // w8
  bool v20; // vf
  int v21; // w8
  _BYTE *v22; // x8
  _BYTE *v23; // x9
  __int64 result; // x0
  __int128 v25; // [xsp+0h] [xbp-70h]
  unsigned int v26; // [xsp+14h] [xbp-5Ch] BYREF
  __int64 v27; // [xsp+18h] [xbp-58h]

  *(_QWORD *)&v3 = &Caver::Proto::MapZone::_default_name_;
  *((_QWORD *)&v3 + 1) = &Caver::Proto::MapZone::_default_title_;
  v25 = v3;
  v27 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = (Caver::Proto::Map *)((char *)this + 16);
  while ( 1 )
  {
LABEL_2:
    v7 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v7 >= *((_QWORD *)a2 + 2) || *v7 < 0 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v8 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( TagFallback == 18 )
      {
        while ( 1 )
        {
LABEL_12:
          v11 = *((_DWORD *)this + 6);
          v10 = *((_DWORD *)this + 7);
          if ( v11 >= v10 )
          {
            if ( v10 == *((_DWORD *)this + 8) )
            {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v6, v10 + 1);
              v11 = *((_DWORD *)this + 6);
              v10 = *((_DWORD *)this + 7);
            }
            *((_DWORD *)this + 7) = v10 + 1;
            v13 = operator new(0x70u);
            *(_QWORD *)v13 = off_6C6700;
            *(_QWORD *)(v13 + 32) = v13 + 56;
            *(_QWORD *)(v13 + 40) = 0;
            *(_DWORD *)(v13 + 48) = 4;
            *(_DWORD *)(v13 + 8) = 0;
            *(_OWORD *)(v13 + 16) = v25;
            *(_DWORD *)(v13 + 88) = 0;
            *(_QWORD *)(v13 + 96) = &Caver::Proto::MapZone::_default_music_;
            *(_DWORD *)(v13 + 104) = 0;
            v14 = *((_QWORD *)this + 2);
            *((_DWORD *)this + 6) = v11 + 1;
            *(_QWORD *)(v14 + 8LL * v11) = v13;
          }
          else
          {
            v12 = *((_QWORD *)this + 2);
            *((_DWORD *)this + 6) = v11 + 1;
            v13 = *(_QWORD *)(v12 + 8LL * v11);
          }
          v15 = (char *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v15 >= *((_QWORD *)a2 + 2) || *v15 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v26) & 1) == 0 )
              return 0;
          }
          else
          {
            v26 = (unsigned __int8)*v15;
            *((_QWORD *)a2 + 1) = v15 + 1;
          }
          v16 = *((_DWORD *)a2 + 14);
          v17 = *((_DWORD *)a2 + 15);
          *((_DWORD *)a2 + 14) = v16 + 1;
          if ( v16 >= v17 )
            return 0;
          v18 = google::protobuf::io::CodedInputStream::PushLimit(a2, v26);
          if ( (Caver::Proto::MapZone::MergePartialFromCodedStream((Caver::Proto::MapZone *)v13, a2) & 1) == 0
            || !*((_BYTE *)a2 + 36) )
          {
            return 0;
          }
          google::protobuf::io::CodedInputStream::PopLimit(a2, v18);
          v19 = *((_DWORD *)a2 + 14);
          v20 = __OFSUB__(v19, 1);
          v21 = v19 - 1;
          if ( v21 < 0 == v20 )
            *((_DWORD *)a2 + 14) = v21;
          v22 = (_BYTE *)*((_QWORD *)a2 + 1);
          v23 = (_BYTE *)*((_QWORD *)a2 + 2);
          if ( v22 >= v23 || *v22 != 18 )
          {
            if ( v22 == v23 && *((_DWORD *)a2 + 11) )
            {
              result = 1;
              *((_DWORD *)a2 + 8) = 0;
              *((_BYTE *)a2 + 36) = 1;
              return result;
            }
            goto LABEL_2;
          }
          *((_QWORD *)a2 + 1) = v22 + 1;
        }
      }
    }
    else
    {
      v8 = (unsigned __int8)*v7;
      *((_DWORD *)a2 + 8) = v8;
      *((_QWORD *)a2 + 1) = v7 + 1;
      if ( (_DWORD)v8 == 18 )
        goto LABEL_12;
    }
    if ( !(_DWORD)v8 || (v8 & 7) == 4 )
      return 1;
    if ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v8, a3) & 1) == 0 )
      return 0;
  }
}

