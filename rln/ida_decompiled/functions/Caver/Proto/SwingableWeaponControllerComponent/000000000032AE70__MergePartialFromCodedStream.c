/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032AE70
 * Mangled: _ZN5Caver5Proto34SwingableWeaponControllerComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::SwingableWeaponControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
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
 * Referenced strings: 59
 *   insn=0x000000000032AE88 string=0x000000000032AE8C "U"
 *   insn=0x000000000032AEA8 string=0x000000000032AEAC "9sD"
 *   insn=0x000000000032AEB8 string=0x000000000032AEBC "h"
 *   insn=0x000000000032AEC0 string=0x000000000032AEC4 """
 *   insn=0x000000000032AEC4 string=0x000000000032AEC8 "\t"
 *   insn=0x000000000032AECC string=0x000000000032AED0 "!"
 *   insn=0x000000000032AED0 string=0x000000000032AED4 ""
 *   insn=0x000000000032AED4 string=0x000000000032AED8 "a""
 *   insn=0x000000000032AED8 string=0x000000000032AEDC "h"
 *   insn=0x000000000032AEE0 string=0x000000000032AEE4 "g"
 *   insn=0x000000000032AEE0 string=0x000000000032AEFC "(|"
 *   insn=0x000000000032AEEC string=0x00000000001F7A40 "0'"
 *   insn=0x000000000032AEF0 string=0x000000000032AEF4 "a""
 *   insn=0x000000000032AEF4 string=0x000000000032AEF8 "A"
 *   insn=0x000000000032AF04 string=0x000000000032AF3C "("
 *   insn=0x000000000032AF0C string=0x000000000032AF28 "("
 *   insn=0x000000000032AF14 string=0x000000000032AF18 "("
 *   insn=0x000000000032AF14 string=0x000000000032AF6C "("
 *   insn=0x000000000032AF20 string=0x000000000032AF24 "?"
 *   insn=0x000000000032AF34 string=0x000000000032AF38 "%"
 *   insn=0x000000000032AF40 string=0x000000000032AF44 "i"
 *   insn=0x000000000032AF44 string=0x000000000032AF48 "?"
 *   insn=0x000000000032AF4C string=0x000000000032AF50 "*"
 *   insn=0x000000000032AF54 string=0x000000000032AF58 "J"
 *   insn=0x000000000032AF58 string=0x000000000032AF5C ")"
 *   insn=0x000000000032AF60 string=0x000000000032AF64 "i"
 *   insn=0x000000000032AF70 string=0x000000000032AF74 "`"
 *   insn=0x000000000032AF78 string=0x000000000032AF7C "UJ"
 *   insn=0x000000000032AF7C string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000032AF80 string=0x000000000032AF84 "A"
 *   insn=0x000000000032AF8C string=0x000000000032AF90 "08"
 *   insn=0x000000000032AF90 string=0x00000000001F9050 "0'"
 *   insn=0x000000000032AF98 string=0x000000000032AF9C "i"
 *   insn=0x000000000032AFA4 string=0x000000000032AFA8 "?"
 *   insn=0x000000000032AFA8 string=0x000000000032AFAC "j"
 *   insn=0x000000000032AFB0 string=0x000000000032AFB4 "B"
 *   insn=0x000000000032AFB4 string=0x000000000032AFB8 "("
 *   insn=0x000000000032AFC0 string=0x000000000032AFC4 "("
 *   insn=0x000000000032AFC4 string=0x000000000032AFC8 "h"
 *   insn=0x000000000032AFCC string=0x000000000032AFD0 "H"
 *   insn=0x000000000032AFD4 string=0x000000000032AFD8 "?"
 *   insn=0x000000000032AFE4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032AFE8 string=0x000000000032AFEC "8"
 *   insn=0x000000000032AFF8 string=0x000000000032AFFC "`"
 *   insn=0x000000000032AFF8 string=0x00000000001F97D0 "0'"
 *   insn=0x000000000032AFFC string=0x000000000032B000 "h"
 *   insn=0x000000000032B008 string=0x000000000032B00C "\t"
 *   insn=0x000000000032B00C string=0x000000000032B010 "?i"
 *   insn=0x000000000032B010 string=0x000000000032B014 "A"
 *   insn=0x000000000032B014 string=0x000000000032B018 ""
 *   insn=0x000000000032B018 string=0x000000000032B01C "h"
 *   insn=0x000000000032B024 string=0x000000000032B028 ""
 *   insn=0x000000000032B028 string=0x000000000032B02C "?"
 *   insn=0x000000000032B038 string=0x000000000032B03C "i)"
 *   insn=0x000000000032B044 string=0x000000000032B048 "("
 *   insn=0x000000000032B058 string=0x000000000032B05C "h"
 *   insn=0x000000000032B064 string=0x000000000032B068 "h.@"
 *   insn=0x000000000032B074 string=0x000000000032B078 "`"
 *   insn=0x000000000032B0B8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SwingableWeaponControllerComponent::MergePartialFromCodedStream(
        Caver::Proto::SwingableWeaponControllerComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  unsigned int v8; // w8
  int v9; // w8
  int v10; // w10
  unsigned __int64 v11; // x8
  char *v12; // x9
  unsigned int v13; // w10
  _BYTE *v14; // x9
  int v15; // w11
  __int64 *v16; // x1
  _QWORD *v17; // x0
  _BYTE *v18; // x8
  __int64 *v19; // x1
  _QWORD *v20; // x0
  __int64 result; // x0
  unsigned int v22; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v23; // [xsp+8h] [xbp-48h]

  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  do
  {
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
            goto LABEL_19;
          v12 = (char *)*((_QWORD *)a2 + 1);
          v11 = *((_QWORD *)a2 + 2);
          if ( (unsigned __int64)v12 >= v11 || *v12 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v22) & 1) == 0 )
              return 0;
            v13 = v22;
            v14 = (_BYTE *)*((_QWORD *)a2 + 1);
            v11 = *((_QWORD *)a2 + 2);
          }
          else
          {
            v13 = (unsigned __int8)*v12;
            v14 = v12 + 1;
            v22 = v13;
            *((_QWORD *)a2 + 1) = v14;
          }
          v15 = *((_DWORD *)this + 8);
          *((_DWORD *)this + 3) = v13;
          v10 = v15 | 1;
          *((_DWORD *)this + 8) = v15 | 1;
          if ( (unsigned __int64)v14 < v11 && *v14 == 18 )
          {
            *((_QWORD *)a2 + 1) = v14 + 1;
            goto LABEL_27;
          }
        }
        if ( v8 != 2 )
          break;
        v9 = v6 & 7;
        if ( v9 != 2 )
          goto LABEL_19;
        v10 = *((_DWORD *)this + 8);
LABEL_27:
        v16 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 8) = v10 | 2;
        if ( v16 == &Caver::Proto::SwingableWeaponControllerComponent::_default_controlling_bone_name_ )
        {
          v17 = (_QWORD *)operator new(8u);
          *v17 = &byte_6FD2F8;
          *((_QWORD *)this + 2) = v17;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v18 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v18 < *((_QWORD *)a2 + 2) && *v18 == 26 )
        {
          *((_QWORD *)a2 + 1) = v18 + 1;
          goto LABEL_33;
        }
      }
      if ( v8 != 3 )
        break;
      v9 = v6 & 7;
      if ( v9 != 2 )
        goto LABEL_19;
LABEL_33:
      v19 = (__int64 *)*((_QWORD *)this + 3);
      *((_DWORD *)this + 8) |= 4u;
      if ( v19 == &Caver::Proto::SwingableWeaponControllerComponent::_default_weapon_template_name_ )
      {
        v20 = (_QWORD *)operator new(8u);
        *v20 = &byte_6FD2F8;
        *((_QWORD *)this + 3) = v20;
      }
      if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
        return 0;
      if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
      {
        result = 1;
        *((_DWORD *)a2 + 8) = 0;
        *((_BYTE *)a2 + 36) = 1;
        return result;
      }
    }
    v9 = v6 & 7;
LABEL_19:
    if ( v9 == 4 )
      return 1;
  }
  while ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v6, a3)
         & 1) != 0 );
  return 0;
}

