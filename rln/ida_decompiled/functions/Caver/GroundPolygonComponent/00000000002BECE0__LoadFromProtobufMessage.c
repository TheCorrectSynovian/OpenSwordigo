/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BECE0
 * Mangled: _ZN5Caver22GroundPolygonComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::GroundPolygonComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 1
 *   0x00000000002BEC04  Caver::GroundPolygonComponent::SetDefaultValues(void)
 *
 * Callees: 13
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F73A0  Caver::Component::UpdateObjectBounds(void)
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FD6B0  Caver::LoadPolygonFromProtobufMessage(Caver::Polygon *,Caver::Proto::Polygon const&)
 *   0x00000000001FE1E0  Caver::Polygon::Polygon(int,Caver::Vector2 const*,bool)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x0000000000200AA0  Caver::Polygon::Bounds(void)
 *   0x0000000000201D20  Caver::Program::LoadFromProtobufMessage(Caver::Proto::Program const&)
 *   0x00000000002039C0  google::protobuf::internal::ExtensionSet::Has(int)
 *   0x0000000000203DE0  std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::operator=(std::vector<Caver::Vector2,std::allocator<Caver::Vector2>> const&)
 *   0x00000000002BEF34  Caver::GroundPolygonComponent::UpdateBounds(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 50
 *   insn=0x00000000002BECF4 string=0x00000000002BECF8 "W"
 *   insn=0x00000000002BED0C string=0x00000000002BED10 "(!"
 *   insn=0x00000000002BED0C string=0x00000000001FA840 "0'"
 *   insn=0x00000000002BED10 string=0x00000000002BED14 ""
 *   insn=0x00000000002BED30 string=0x00000000002BED34 "h"
 *   insn=0x00000000002BED40 string=0x00000000002BED44 "h"
 *   insn=0x00000000002BED48 string=0x00000000002BED4C "h"
 *   insn=0x00000000002BED50 string=0x00000000002BED54 "8!"
 *   insn=0x00000000002BED54 string=0x00000000002BED58 "`"
 *   insn=0x00000000002BED58 string=0x00000000002BED5C "h"
 *   insn=0x00000000002BED68 string=0x00000000002BED6C "\t"
 *   insn=0x00000000002BED6C string=0x00000000002BED70 "("
 *   insn=0x00000000002BED7C string=0x00000000002BED80 "?"
 *   insn=0x00000000002BED84 string=0x00000000002BEE54 "V!"
 *   insn=0x00000000002BED98 string=0x00000000002BED9C "?"
 *   insn=0x00000000002BED9C string=0x00000000002BEDA0 "M"
 *   insn=0x00000000002BEDBC string=0x00000000002BEDC0 "pyj"
 *   insn=0x00000000002BEDC8 string=0x00000000002BEDCC "j"
 *   insn=0x00000000002BEDCC string=0x00000000002BEDD8 "J"
 *   insn=0x00000000002BEDD8 string=0x00000000002BEDDC "_"
 *   insn=0x00000000002BEDE4 string=0x00000000002BEDE8 "\t"
 *   insn=0x00000000002BEDEC string=0x00000000002BEDF0 "i"
 *   insn=0x00000000002BEDF8 string=0x00000000002BEDFC "i"
 *   insn=0x00000000002BEDFC string=0x00000000002BEE00 "H"
 *   insn=0x00000000002BEE18 string=0x00000000002BEE1C "!!"
 *   insn=0x00000000002BEE24 string=0x00000000002BEE28 "h""
 *   insn=0x00000000002BEE30 string=0x00000000002BEE34 ""
 *   insn=0x00000000002BEE38 string=0x00000000002BEE3C "`"
 *   insn=0x00000000002BEE40 string=0x00000000002BEE44 "W"
 *   insn=0x00000000002BEE44 string=0x00000000001F73A0 "0'"
 *   insn=0x00000000002BEE48 string=0x00000000002BEE4C "@"
 *   insn=0x00000000002BEE50 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002BEE78 string=0x00000000002BEE7C ""
 *   insn=0x00000000002BEE7C string=0x00000000002BEE80 "H"
 *   insn=0x00000000002BEE80 string=0x00000000002BEE84 "I!"
 *   insn=0x00000000002BEE84 string=0x00000000002BEE88 ""
 *   insn=0x00000000002BEE88 string=0x00000000002BEE8C ")"
 *   insn=0x00000000002BEE90 string=0x00000000002BEE94 ")"
 *   insn=0x00000000002BEE94 string=0x00000000002BEE98 "("
 *   insn=0x00000000002BEE9C string=0x00000000002BEEA0 "`"
 *   insn=0x00000000002BEEA4 string=0x00000000001FD6B0 "0'"
 *   insn=0x00000000002BEEA8 string=0x00000000002BEEAC ""
 *   insn=0x00000000002BEEB0 string=0x00000000002BEEB4 "\t"
 *   insn=0x00000000002BEEB8 string=0x00000000002BEEBC "("
 *   insn=0x00000000002BEEC0 string=0x00000000002BEEC4 "t"
 *   insn=0x00000000002BEEE0 string=0x00000000002BEEE4 "`"
 *   insn=0x00000000002BEEE4 string=0x00000000002BEEE8 "."
 *   insn=0x00000000002BEF14 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002BEF1C string=0x00000000002BEF20 "h"
 *   insn=0x00000000002BEF2C string=0x00000000002BEF30 "e\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GroundPolygonComponent::LoadFromProtobufMessage(
        Caver::GroundPolygonComponent *this,
        const Caver::Proto::Component *a2)
{
  google::protobuf::internal::ExtensionSet *v4; // x21
  __int64 Message; // x0
  __int64 v6; // x20
  int v7; // w8
  __int64 v8; // x8
  int v9; // w1
  __int64 v10; // x9
  int v11; // w8
  __int64 v12; // x11
  __int64 v13; // x10
  _DWORD *v14; // x12
  _DWORD *v15; // x14
  __int64 v16; // x16
  int v17; // w15
  int v18; // w16
  __int64 result; // x0
  const Caver::Proto::Polygon *v20; // x2
  __int64 v21; // x8
  __int64 v22; // x8
  __int128 v23; // [xsp+0h] [xbp-70h] BYREF
  void *p[2]; // [xsp+10h] [xbp-60h] BYREF
  __int16 v25; // [xsp+30h] [xbp-40h]
  __int64 v26; // [xsp+38h] [xbp-38h]

  v26 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::LoadFromProtobufMessage(this, a2);
  v4 = (const Caver::Proto::Component *)((char *)a2 + 8);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::GroundPolygonComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E9350);
  v6 = Message;
  *((_BYTE *)this + 176) = *(_BYTE *)(Message + 88);
  v7 = *(_DWORD *)(Message + 108);
  if ( (v7 & 0x10) != 0 )
  {
    *((_DWORD *)this + 42) = *(_DWORD *)(Message + 92);
    if ( (v7 & 0x20) == 0 )
    {
LABEL_3:
      if ( (v7 & 0x40) == 0 )
        goto LABEL_5;
      goto LABEL_4;
    }
  }
  else if ( (v7 & 0x20) == 0 )
  {
    goto LABEL_3;
  }
  *((_DWORD *)this + 43) = *(_DWORD *)(Message + 96);
  if ( (v7 & 0x40) != 0 )
LABEL_4:
    *((_DWORD *)this + 45) = *(_DWORD *)(Message + 100);
LABEL_5:
  *((_BYTE *)this + 184) = *(_BYTE *)(Message + 104);
  if ( *(_QWORD *)(Message + 16) )
    v8 = Message;
  else
    v8 = Caver::Proto::GroundPolygonComponent::default_instance_;
  Caver::Program::LoadFromProtobufMessage(
    (Caver::GroundPolygonComponent *)((char *)this + 192),
    *(const Caver::Proto::Program **)(v8 + 16));
  v9 = *(_DWORD *)(v6 + 32);
  if ( v9 >= 1 )
  {
    Caver::Polygon::Polygon((Caver::Polygon *)p, v9, 0, 1);
    v10 = *(int *)(v6 + 32);
    if ( (int)v10 <= 0 )
    {
      v11 = (int)p[0];
    }
    else
    {
      v11 = (int)p[0];
      v12 = *(_QWORD *)(v6 + 24);
      v13 = 0;
      v14 = (char *)p[1] + 8 * SLODWORD(p[0]);
      v15 = (char *)p[1] + 4;
      do
      {
        v16 = *(_QWORD *)(v12 + 8 * v13);
        v17 = *(_DWORD *)(v16 + 12);
        v18 = *(_DWORD *)(v16 + 16);
        *(v15 - 1) = v17;
        *v15 = v18;
        if ( !v13 )
        {
          *v14 = v17;
          v14[1] = v18;
        }
        ++v13;
        v15 += 2;
      }
      while ( v13 < v10 );
    }
    *((_DWORD *)this + 28) = v11;
    std::vector<Caver::Vector2>::operator=();
    *((_WORD *)this + 72) = v25;
    Caver::Polygon::Bounds((__int64 *)&v23, (Caver::GroundPolygonComponent *)((char *)this + 112));
    *(_OWORD *)((char *)this + 152) = v23;
    Caver::Component::UpdateObjectBounds(this);
    if ( p[1] )
      operator delete(p[1]);
  }
  result = google::protobuf::internal::ExtensionSet::Has(v4, Caver::Proto::ShapeComponent::extension);
  if ( (result & 1) != 0 )
  {
    result = google::protobuf::internal::ExtensionSet::GetMessage(
               v4,
               Caver::Proto::ShapeComponent::extension,
               (const google::protobuf::MessageLite *)qword_6E93B8);
    if ( (*(_BYTE *)(result + 40) & 4) != 0 )
    {
      if ( *(_QWORD *)(result + 32) )
        v21 = result;
      else
        v21 = Caver::Proto::ShapeComponent::default_instance_;
      result = Caver::LoadPolygonFromProtobufMessage(
                 (Caver::GroundPolygonComponent *)((char *)this + 112),
                 *(Caver::Polygon **)(v21 + 32),
                 v20);
    }
  }
  if ( (*(_BYTE *)(v6 + 108) & 4) != 0 )
  {
    if ( *(_QWORD *)(v6 + 80) )
      v22 = v6;
    else
      v22 = Caver::Proto::GroundPolygonComponent::default_instance_;
    Caver::LoadPolygonFromProtobufMessage(
      (Caver::GroundPolygonComponent *)((char *)this + 112),
      *(Caver::Polygon **)(v22 + 80),
      v20);
    Caver::Polygon::Bounds((__int64 *)p, (Caver::GroundPolygonComponent *)((char *)this + 112));
    *(_OWORD *)((char *)this + 152) = *(_OWORD *)p;
    return Caver::Component::UpdateObjectBounds(this);
  }
  return result;
}

