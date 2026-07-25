/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D8398
 * Mangled: _ZN5Caver5Proto12SoundLibrary27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::SoundLibrary::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F82D0  Caver::Proto::SoundEffect::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *
 * Referenced strings: 63
 *   insn=0x00000000002D83B4 string=0x00000000002D83B8 "h "
 *   insn=0x00000000002D83B8 string=0x00000000002D83BC "i "
 *   insn=0x00000000002D83BC string=0x00000000002D83C0 "X"
 *   insn=0x00000000002D83C0 string=0x00000000002D83C4 ""
 *   insn=0x00000000002D83C4 string=0x00000000002D83C8 ")"
 *   insn=0x00000000002D83C8 string=0x00000000002D83CC "j "
 *   insn=0x00000000002D83CC string=0x00000000002D83D0 "JuC"
 *   insn=0x00000000002D83D4 string=0x00000000002D83D8 ""
 *   insn=0x00000000002D83E0 string=0x00000000002D83E4 " "
 *   insn=0x00000000002D83F0 string=0x00000000002D83F4 "@"
 *   insn=0x00000000002D83FC string=0x00000000002D8400 "h"
 *   insn=0x00000000002D8404 string=0x00000000002D8408 """
 *   insn=0x00000000002D8408 string=0x00000000002D840C "\t"
 *   insn=0x00000000002D8410 string=0x00000000002D8414 "!"
 *   insn=0x00000000002D8414 string=0x00000000002D8418 ""
 *   insn=0x00000000002D8418 string=0x00000000002D841C "a""
 *   insn=0x00000000002D841C string=0x00000000002D8420 "h"
 *   insn=0x00000000002D8420 string=0x00000000002D8424 "?("
 *   insn=0x00000000002D8424 string=0x00000000002D8428 "@"
 *   insn=0x00000000002D842C string=0x00000000002D8430 "("
 *   insn=0x00000000002D843C string=0x00000000002D8440 "$"
 *   insn=0x00000000002D8440 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002D8444 string=0x00000000002D8448 "["
 *   insn=0x00000000002D844C string=0x00000000002D8450 "|}"
 *   insn=0x00000000002D8450 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002D8454 string=0x00000000002D8458 "a""
 *   insn=0x00000000002D8458 string=0x00000000002D845C "?("
 *   insn=0x00000000002D845C string=0x00000000002D8460 "a"
 *   insn=0x00000000002D8468 string=0x00000000002D846C "h"
 *   insn=0x00000000002D8490 string=0x00000000002D84EC "h"
 *   insn=0x00000000002D849C string=0x00000000002D84B0 ""
 *   insn=0x00000000002D84A8 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002D84B8 string=0x00000000002D84BC "It"
 *   insn=0x00000000002D84BC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D84F4 string=0x00000000002D84F8 "\t"
 *   insn=0x00000000002D84FC string=0x00000000002D8500 ")"
 *   insn=0x00000000002D8500 string=0x00000000002D8504 ""
 *   insn=0x00000000002D8508 string=0x00000000002D850C "h"
 *   insn=0x00000000002D8510 string=0x00000000002D8524 "h&G)\n"
 *   insn=0x00000000002D851C string=0x00000000001F9050 "0'"
 *   insn=0x00000000002D8524 string=0x00000000002D8528 "\n"
 *   insn=0x00000000002D852C string=0x00000000002D8530 "j:"
 *   insn=0x00000000002D8530 string=0x00000000002D8534 "\n"
 *   insn=0x00000000002D854C string=0x00000000002D8550 "`"
 *   insn=0x00000000002D8550 string=0x00000000001F82D0 "0'"
 *   insn=0x00000000002D8554 string=0x00000000002D8558 "h"
 *   insn=0x00000000002D8564 string=0x00000000002D8568 "*"
 *   insn=0x00000000002D8568 string=0x00000000002D856C "h:@"
 *   insn=0x00000000002D856C string=0x00000000002D8570 ""
 *   insn=0x00000000002D8570 string=0x00000000002D8574 "K"
 *   insn=0x00000000002D8574 string=0x00000000002D8578 "h:"
 *   insn=0x00000000002D8574 string=0x00000000002D857C "h"
 *   insn=0x00000000002D8584 string=0x00000000002D8588 "\n"
 *   insn=0x00000000002D8588 string=0x00000000002D858C "_)"
 *   insn=0x00000000002D8590 string=0x00000000002D8468 ""
 *   insn=0x00000000002D8594 string=0x00000000002D8598 "A"
 *   insn=0x00000000002D8598 string=0x00000000002D859C "h.@"
 *   insn=0x00000000002D859C string=0x00000000002D85A0 ""
 *   insn=0x00000000002D85A8 string=0x00000000002D85AC "`"
 *   insn=0x00000000002D85B0 string=0x00000000002D85B8 ""
 *   insn=0x00000000002D85C0 string=0x00000000002D85C4 "a"
 *   insn=0x00000000002D85C4 string=0x00000000002D85F0 "8w"
 *   insn=0x00000000002D85F0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SoundLibrary::MergePartialFromCodedStream(
        Caver::Proto::SoundLibrary *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  __int128 v4; // q0
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
  __int128 v25; // [xsp+0h] [xbp-60h]
  unsigned int v26; // [xsp+14h] [xbp-4Ch] BYREF
  __int64 v27; // [xsp+18h] [xbp-48h]

  *(_QWORD *)&v4 = &Caver::Proto::SoundEffect::_default_name_;
  v6 = (Caver::Proto::SoundLibrary *)((char *)this + 16);
  *((_QWORD *)&v4 + 1) = &Caver::Proto::SoundEffect::_default_resource_name_;
  v27 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v25 = v4;
  while ( 1 )
  {
LABEL_2:
    v7 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v7 >= *((_QWORD *)a2 + 2) || *v7 < 0 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v8 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( TagFallback == 10 )
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
            v13 = operator new(0x30u);
            *(_QWORD *)v13 = off_6C6110;
            *(_DWORD *)(v13 + 8) = 0;
            *(_OWORD *)(v13 + 16) = v25;
            *(_QWORD *)(v13 + 32) = 0x3DCCCCCD3F800000LL;
            *(_DWORD *)(v13 + 40) = 0;
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
          if ( (Caver::Proto::SoundEffect::MergePartialFromCodedStream((Caver::Proto::SoundEffect *)v13, a2) & 1) == 0
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
          if ( v22 >= v23 || *v22 != 10 )
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
      if ( (_DWORD)v8 == 10 )
        goto LABEL_12;
    }
    if ( !(_DWORD)v8 || (v8 & 7) == 4 )
      return 1;
    if ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v8, a3) & 1) == 0 )
      return 0;
  }
}

