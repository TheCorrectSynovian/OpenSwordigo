/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D9704
 * Mangled: _ZN5Caver5Proto13MusicPlaylist27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::MusicPlaylist::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001F6240  Caver::Proto::MusicPlaylist::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 10
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x00000000001FF370  Caver::Proto::MusicTrack::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *
 * Referenced strings: 75
 *   insn=0x00000000002D9720 string=0x00000000002D9724 "h "
 *   insn=0x00000000002D9724 string=0x00000000002D9728 "i "
 *   insn=0x00000000002D9728 string=0x00000000002D972C "X"
 *   insn=0x00000000002D972C string=0x00000000002D9730 ""
 *   insn=0x00000000002D9730 string=0x00000000002D9734 ")}B"
 *   insn=0x00000000002D9734 string=0x00000000002D9738 "z "
 *   insn=0x00000000002D9738 string=0x00000000002D973C "\n"
 *   insn=0x00000000002D973C string=0x00000000002D9740 "Z"
 *   insn=0x00000000002D974C string=0x00000000002D9750 "a"
 *   insn=0x00000000002D9750 string=0x00000000002D9754 "<A"
 *   insn=0x00000000002D975C string=0x00000000002D9760 "h"
 *   insn=0x00000000002D9764 string=0x00000000002D9768 """
 *   insn=0x00000000002D9768 string=0x00000000002D976C "\t"
 *   insn=0x00000000002D9770 string=0x00000000002D9774 "!"
 *   insn=0x00000000002D9774 string=0x00000000002D9778 ""
 *   insn=0x00000000002D9778 string=0x00000000002D977C "a""
 *   insn=0x00000000002D977C string=0x00000000002D9780 "h"
 *   insn=0x00000000002D9784 string=0x00000000002D97A0 "(|"
 *   insn=0x00000000002D9790 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002D9794 string=0x00000000002D9798 "a""
 *   insn=0x00000000002D97A8 string=0x00000000002D97C4 "("
 *   insn=0x00000000002D97B0 string=0x00000000002D97B4 "("
 *   insn=0x00000000002D97B0 string=0x00000000002D982C "("
 *   insn=0x00000000002D97BC string=0x00000000002D97C0 """
 *   insn=0x00000000002D97C8 string=0x00000000002D97CC "!"
 *   insn=0x00000000002D97CC string=0x00000000002D97D0 "i "
 *   insn=0x00000000002D97D8 string=0x00000000002D97DC ")"
 *   insn=0x00000000002D97DC string=0x00000000002D97E0 ""
 *   insn=0x00000000002D97E4 string=0x00000000002D97E8 "?"
 *   insn=0x00000000002D97F0 string=0x00000000002D97F4 "{o"
 *   insn=0x00000000002D97F4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D97F8 string=0x00000000002D97FC ";"
 *   insn=0x00000000002D9808 string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002D980C string=0x00000000002D9810 "h"
 *   insn=0x00000000002D9814 string=0x00000000002D9818 "B"
 *   insn=0x00000000002D9818 string=0x00000000002D981C "\t"
 *   insn=0x00000000002D981C string=0x00000000002D9820 "?I"
 *   insn=0x00000000002D9824 string=0x00000000002D9828 "N"
 *   insn=0x00000000002D9828 string=0x00000000002D9960 ""
 *   insn=0x00000000002D9838 string=0x00000000002D983C "%"
 *   insn=0x00000000002D983C string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002D9840 string=0x00000000002D9844 "R"
 *   insn=0x00000000002D9868 string=0x00000000002D98B8 "h"
 *   insn=0x00000000002D9874 string=0x00000000002D9888 ""
 *   insn=0x00000000002D987C string=0x00000000002D9880 "("
 *   insn=0x00000000002D9880 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002D9890 string=0x00000000002D9894 "So"
 *   insn=0x00000000002D98C0 string=0x00000000002D98C4 "\t"
 *   insn=0x00000000002D98C8 string=0x00000000002D98CC ")"
 *   insn=0x00000000002D98CC string=0x00000000002D98D0 ""
 *   insn=0x00000000002D98D4 string=0x00000000002D98D8 "h"
 *   insn=0x00000000002D98DC string=0x00000000002D98F0 "h&G)\n"
 *   insn=0x00000000002D98E8 string=0x00000000001F9050 "0'"
 *   insn=0x00000000002D98F0 string=0x00000000002D98F4 "\n"
 *   insn=0x00000000002D98F8 string=0x00000000002D98FC "j:"
 *   insn=0x00000000002D98FC string=0x00000000002D9900 "j"
 *   insn=0x00000000002D991C string=0x00000000002D9920 "`"
 *   insn=0x00000000002D9920 string=0x00000000002D9924 "h"
 *   insn=0x00000000002D9924 string=0x00000000002D9928 "("
 *   insn=0x00000000002D9930 string=0x00000000002D9934 "7"
 *   insn=0x00000000002D9934 string=0x00000000002D9938 "h:@"
 *   insn=0x00000000002D9938 string=0x00000000002D993C ""
 *   insn=0x00000000002D993C string=0x00000000002D9940 "K"
 *   insn=0x00000000002D9940 string=0x00000000002D9944 "h:"
 *   insn=0x00000000002D9940 string=0x00000000002D9948 "h"
 *   insn=0x00000000002D9950 string=0x00000000002D9954 "\n"
 *   insn=0x00000000002D9954 string=0x00000000002D9958 "_I"
 *   insn=0x00000000002D9960 string=0x00000000002D9964 "h"
 *   insn=0x00000000002D9970 string=0x00000000002D9974 "h.@"
 *   insn=0x00000000002D9974 string=0x00000000002D9978 "H"
 *   insn=0x00000000002D9980 string=0x00000000002D9984 "`"
 *   insn=0x00000000002D9988 string=0x00000000002D9998 ""
 *   insn=0x00000000002D99A0 string=0x00000000002D99A4 "!"
 *   insn=0x00000000002D99A4 string=0x00000000002D99C8 "Br"
 *   insn=0x00000000002D99C8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MusicPlaylist::MergePartialFromCodedStream(
        Caver::Proto::MusicPlaylist *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // x21
  char *v6; // x8
  unsigned __int64 v7; // x1
  unsigned int TagFallback; // w0
  int v9; // w8
  __int64 *v10; // x1
  _QWORD *v11; // x0
  _BYTE *v12; // x8
  int v13; // w8
  int v14; // w23
  __int64 v15; // x8
  __int64 v16; // x22
  __int64 v17; // x8
  char *v18; // x8
  int v19; // w8
  int v20; // w9
  int v21; // w23
  int v22; // w8
  bool v23; // vf
  int v24; // w8
  _BYTE *v25; // x9
  __int64 result; // x0
  unsigned int v27; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v28; // [xsp+8h] [xbp-58h]

  v5 = (Caver::Proto::MusicPlaylist *)((char *)this + 24);
  v28 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v6 >= *((_QWORD *)a2 + 2) || *v6 < 0 )
        {
          TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
          v7 = TagFallback;
          *((_DWORD *)a2 + 8) = TagFallback;
          if ( !TagFallback )
            return 1;
        }
        else
        {
          v7 = (unsigned __int8)*v6;
          *((_DWORD *)a2 + 8) = v7;
          *((_QWORD *)a2 + 1) = v6 + 1;
          if ( !(_DWORD)v7 )
            return 1;
        }
        if ( (unsigned int)v7 >> 3 != 1 )
          break;
        v9 = v7 & 7;
        if ( v9 != 2 )
          goto LABEL_19;
        v10 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 20) |= 1u;
        if ( v10 == &Caver::Proto::MusicPlaylist::_default_name_ )
        {
          v11 = (_QWORD *)operator new(8u);
          *v11 = &byte_6FD2F8;
          *((_QWORD *)this + 2) = v11;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v12 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v12 < *((_QWORD *)a2 + 2) && *v12 == 18 )
          goto LABEL_38;
      }
      if ( (unsigned int)v7 >> 3 != 2 )
        break;
      v9 = v7 & 7;
      if ( v9 != 2 )
        goto LABEL_19;
      while ( 1 )
      {
        v14 = *((_DWORD *)this + 8);
        v13 = *((_DWORD *)this + 9);
        if ( v14 >= v13 )
        {
          if ( v13 == *((_DWORD *)this + 10) )
          {
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v5, v13 + 1);
            v14 = *((_DWORD *)this + 8);
            v13 = *((_DWORD *)this + 9);
          }
          *((_DWORD *)this + 9) = v13 + 1;
          v16 = operator new(0x20u);
          *(_QWORD *)v16 = off_6C6200;
          *(_DWORD *)(v16 + 8) = 0;
          *(_QWORD *)(v16 + 16) = &Caver::Proto::MusicTrack::_default_resource_name_;
          *(_QWORD *)(v16 + 24) = 1065353216;
          v17 = *((_QWORD *)this + 3);
          *((_DWORD *)this + 8) = v14 + 1;
          *(_QWORD *)(v17 + 8LL * v14) = v16;
        }
        else
        {
          v15 = *((_QWORD *)this + 3);
          *((_DWORD *)this + 8) = v14 + 1;
          v16 = *(_QWORD *)(v15 + 8LL * v14);
        }
        v18 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v18 >= *((_QWORD *)a2 + 2) || *v18 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v27) & 1) == 0 )
            return 0;
        }
        else
        {
          v27 = (unsigned __int8)*v18;
          *((_QWORD *)a2 + 1) = v18 + 1;
        }
        v19 = *((_DWORD *)a2 + 14);
        v20 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v19 + 1;
        if ( v19 >= v20 )
          return 0;
        v21 = google::protobuf::io::CodedInputStream::PushLimit(a2, v27);
        if ( (Caver::Proto::MusicTrack::MergePartialFromCodedStream((Caver::Proto::MusicTrack *)v16, a2) & 1) == 0
          || !*((_BYTE *)a2 + 36) )
        {
          return 0;
        }
        google::protobuf::io::CodedInputStream::PopLimit(a2, v21);
        v22 = *((_DWORD *)a2 + 14);
        v23 = __OFSUB__(v22, 1);
        v24 = v22 - 1;
        if ( v24 < 0 == v23 )
          *((_DWORD *)a2 + 14) = v24;
        v12 = (_BYTE *)*((_QWORD *)a2 + 1);
        v25 = (_BYTE *)*((_QWORD *)a2 + 2);
        if ( v12 >= v25 || *v12 != 18 )
          break;
LABEL_38:
        *((_QWORD *)a2 + 1) = v12 + 1;
      }
      if ( v12 == v25 && *((_DWORD *)a2 + 11) )
      {
        result = 1;
        *((_DWORD *)a2 + 8) = 0;
        *((_BYTE *)a2 + 36) = 1;
        return result;
      }
    }
    v9 = v7 & 7;
LABEL_19:
    if ( v9 == 4 )
      return 1;
    if ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v7, a3) & 1) == 0 )
      return 0;
  }
}

