/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000236DAC
 * Mangled: _ZN5Caver14ShapeComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::ShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 1
 *   0x00000000001FF8D0  Caver::ShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 22
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F61A0  Caver::Shape::ShapeWithCircle(Caver::Circle const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F73B0  Caver::Proto::Polygon::Polygon(void)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001F98A0  Caver::Proto::Circle::Circle(void)
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FB070  Caver::Proto::Rectangle::Rectangle(void)
 *   0x00000000001FC9A0  boost::detail::shared_count::shared_count<Caver::Polygon>(Caver::Polygon *)
 *   0x00000000001FD6B0  Caver::LoadPolygonFromProtobufMessage(Caver::Polygon *,Caver::Proto::Polygon const&)
 *   0x00000000001FD7C0  Caver::Shape::ShapeWithRectangle(Caver::Rectangle const&)
 *   0x00000000001FE190  Caver::Proto::ShapeComponent::default_instance(void)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000001FF360  Caver::Shape::ShapeWithPolygonNoCopy(Caver::Polygon *)
 *   0x00000000002012C0  Caver::SavePolygonToProtobufMessage(Caver::Polygon const&,Caver::Proto::Polygon *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002373AC  Caver::ShapeComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 138
 *   insn=0x0000000000236DBC string=0x0000000000236DC0 "V"
 *   insn=0x0000000000236DD4 string=0x00000000001FA840 "0'"
 *   insn=0x0000000000236DD8 string=0x0000000000236DDC ""
 *   insn=0x0000000000236DFC string=0x0000000000236E00 "("
 *   insn=0x0000000000236E08 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000236E28 string=0x0000000000236E2C ")"
 *   insn=0x0000000000236E30 string=0x0000000000236E34 ")"
 *   insn=0x0000000000236E34 string=0x0000000000236E38 "("
 *   insn=0x0000000000236E40 string=0x0000000000236E44 "h"
 *   insn=0x0000000000236E40 string=0x00000000001FD6B0 "0'"
 *   insn=0x0000000000236E50 string=0x0000000000236E54 "C!"
 *   insn=0x0000000000236E60 string=0x0000000000236E64 "."
 *   insn=0x0000000000236E6C string=0x0000000000236E70 ")"
 *   insn=0x0000000000236E78 string=0x0000000000236E7C ")"
 *   insn=0x0000000000236E7C string=0x0000000000236E80 "("
 *   insn=0x0000000000236E80 string=0x0000000000236E84 "\t@"
 *   insn=0x0000000000236E84 string=0x0000000000236E88 "i"
 *   insn=0x0000000000236E88 string=0x0000000000236E8C "\n"
 *   insn=0x0000000000236E8C string=0x0000000000236E90 "AA"
 *   insn=0x0000000000236E90 string=0x0000000000236E94 "4"
 *   insn=0x0000000000236E9C string=0x0000000000236EA0 "H"
 *   insn=0x0000000000236EA0 string=0x00000000001FD7C0 "0'"
 *   insn=0x0000000000236EAC string=0x0000000000236EB0 ""
 *   insn=0x0000000000236EB8 string=0x0000000000236EBC ")"
 *   insn=0x0000000000236EC4 string=0x0000000000236EC8 ")"
 *   insn=0x0000000000236EC8 string=0x0000000000236ECC "("
 *   insn=0x0000000000236ECC string=0x0000000000236ED0 "@"
 *   insn=0x0000000000236ED4 string=0x0000000000236ED8 ")YC"
 *   insn=0x0000000000236ED8 string=0x0000000000236EDC "\n\t@"
 *   insn=0x0000000000236EDC string=0x0000000000236EE0 ")"
 *   insn=0x0000000000236EE0 string=0x0000000000236EE4 "_"
 *   insn=0x0000000000236EE4 string=0x0000000000236EE8 "j"
 *   insn=0x0000000000236EE8 string=0x0000000000236EEC ")"
 *   insn=0x0000000000236EEC string=0x0000000000236EF0 ")\t@"
 *   insn=0x0000000000236EF0 string=0x0000000000236EF4 ""
 *   insn=0x0000000000236EF4 string=0x0000000000236EF8 "T"
 *   insn=0x0000000000236EF8 string=0x0000000000236EFC ")"
 *   insn=0x0000000000236F0C string=0x00000000001F61A0 "0'"
 *   insn=0x0000000000236F1C string=0x0000000000236F20 "3"
 *   insn=0x0000000000236F20 string=0x0000000000236F24 "h"
 *   insn=0x0000000000236F24 string=0x0000000000236F28 ""
 *   insn=0x0000000000236F28 string=0x0000000000236F2C "h"
 *   insn=0x0000000000236F30 string=0x0000000000236F34 "h"
 *   insn=0x0000000000236F38 string=0x0000000000236F3C "\t@"
 *   insn=0x0000000000236F40 string=0x0000000000236F44 "h\n@"
 *   insn=0x0000000000236F44 string=0x0000000000236F48 ""
 *   insn=0x0000000000236F48 string=0x0000000000236F4C "h\n"
 *   insn=0x0000000000236F50 string=0x0000000000236F54 "h"
 *   insn=0x0000000000236F58 string=0x0000000000236F5C "@"
 *   insn=0x0000000000236F88 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000236F90 string=0x0000000000236F94 "4"
 *   insn=0x0000000000236F98 string=0x0000000000236F9C ""
 *   insn=0x0000000000236FA8 string=0x0000000000236FAC "\t@"
 *   insn=0x0000000000236FB8 string=0x0000000000236FBC ""
 *   insn=0x0000000000236FC8 string=0x0000000000236FCC "@"
 *   insn=0x0000000000236FD4 string=0x0000000000236FD8 "("
 *   insn=0x0000000000236FE8 string=0x0000000000236FEC ""
 *   insn=0x0000000000236FF0 string=0x0000000000236FF4 "!"
 *   insn=0x0000000000236FF8 string=0x0000000000236FFC "\t@"
 *   insn=0x0000000000237008 string=0x000000000023700C ""
 *   insn=0x0000000000237010 string=0x0000000000237014 "!"
 *   insn=0x0000000000237018 string=0x000000000023701C "@"
 *   insn=0x0000000000237030 string=0x0000000000237034 "4"
 *   insn=0x0000000000237038 string=0x000000000023703C ""
 *   insn=0x0000000000237048 string=0x000000000023704C "\t@"
 *   insn=0x0000000000237058 string=0x000000000023705C ""
 *   insn=0x0000000000237068 string=0x000000000023706C "@"
 *   insn=0x0000000000237094 string=0x0000000000237098 "U"
 *   insn=0x00000000002370A8 string=0x00000000002370AC " !"
 *   insn=0x00000000002370B8 string=0x00000000002370BC "9"
 *   insn=0x00000000002370BC string=0x00000000001FC9A0 "0'"
 *   insn=0x00000000002370C8 string=0x00000000002370CC "!."
 *   insn=0x00000000002370DC string=0x00000000002370E0 ")"
 *   insn=0x00000000002370E4 string=0x00000000002370E8 "j"
 *   insn=0x00000000002370E8 string=0x00000000002370EC "h"
 *   insn=0x00000000002370EC string=0x00000000002370F0 "!"
 *   insn=0x00000000002370F4 string=0x00000000002370F8 "\t@"
 *   insn=0x0000000000237104 string=0x0000000000237108 ""
 *   insn=0x000000000023710C string=0x0000000000237110 "!"
 *   insn=0x0000000000237114 string=0x0000000000237118 "@"
 *   insn=0x0000000000237128 string=0x000000000023712C "i"
 *   insn=0x000000000023712C string=0x0000000000237130 "h"
 *   insn=0x0000000000237134 string=0x0000000000237138 "3"
 *   insn=0x0000000000237138 string=0x000000000023713C "h"
 *   insn=0x000000000023713C string=0x0000000000237140 ""
 *   insn=0x0000000000237140 string=0x0000000000237144 "h"
 *   insn=0x0000000000237148 string=0x000000000023714C "h"
 *   insn=0x0000000000237150 string=0x0000000000237154 "\t@"
 *   insn=0x0000000000237158 string=0x000000000023715C "h\n@"
 *   insn=0x000000000023715C string=0x0000000000237160 ""
 *   insn=0x0000000000237160 string=0x0000000000237164 "h\n"
 *   insn=0x0000000000237168 string=0x000000000023716C "h"
 *   insn=0x0000000000237170 string=0x0000000000237174 "@"
 *   insn=0x0000000000237188 string=0x00000000002371A0 "L"
 *   insn=0x00000000002371A8 string=0x00000000002371AC "4"
 *   insn=0x00000000002371B0 string=0x00000000002371B4 ""
 *   insn=0x00000000002371C0 string=0x00000000002371C4 "\t@"
 *   insn=0x00000000002371D0 string=0x00000000002371D4 ""
 *   insn=0x00000000002371E0 string=0x00000000002371E4 "@"
 *   insn=0x00000000002371F4 string=0x00000000002371F8 "U\"
 *   insn=0x0000000000237210 string=0x0000000000237214 "C "
 *   insn=0x0000000000237214 string=0x0000000000237218 "h%"
 *   insn=0x0000000000237218 string=0x000000000023721C ""
 *   insn=0x000000000023721C string=0x0000000000237220 "s""
 *   insn=0x000000000023722C string=0x0000000000237230 "b"
 *   insn=0x0000000000237240 string=0x00000000001F7570 "0'"
 *   insn=0x0000000000237250 string=0x00000000002372B0 "h*@"
 *   insn=0x0000000000237258 string=0x00000000002372F4 "h*@"
 *   insn=0x000000000023725C string=0x0000000000237260 "a"
 *   insn=0x0000000000237260 string=0x0000000000237264 "h*@"
 *   insn=0x0000000000237264 string=0x0000000000237268 "t\n@"
 *   insn=0x000000000023726C string=0x0000000000237270 ""
 *   insn=0x0000000000237270 string=0x0000000000237274 "h*"
 *   insn=0x0000000000237284 string=0x0000000000237288 "z"
 *   insn=0x0000000000237288 string=0x000000000023728C "t\n"
 *   insn=0x0000000000237288 string=0x00000000001FB070 "0'"
 *   insn=0x000000000023729C string=0x00000000002372A0 ")"
 *   insn=0x00000000002372A8 string=0x00000000002372AC "0"
 *   insn=0x00000000002372B0 string=0x00000000002372B4 "v"
 *   insn=0x00000000002372B8 string=0x00000000002372BC ""
 *   insn=0x00000000002372BC string=0x00000000002372C0 "h*"
 *   insn=0x00000000002372D0 string=0x00000000002372D4 "7"
 *   insn=0x00000000002372D4 string=0x00000000002372D8 "v"
 *   insn=0x00000000002372D4 string=0x00000000001F73B0 "0'"
 *   insn=0x00000000002372F4 string=0x00000000002372F8 "t"
 *   insn=0x00000000002372FC string=0x0000000000237300 ""
 *   insn=0x0000000000237300 string=0x0000000000237304 "h*"
 *   insn=0x0000000000237314 string=0x0000000000237318 "b\t"
 *   insn=0x0000000000237318 string=0x000000000023731C "t"
 *   insn=0x0000000000237318 string=0x00000000001F98A0 "0'"
 *   insn=0x0000000000237324 string=0x0000000000237328 ""
 *   insn=0x000000000023733C string=0x0000000000237340 "d"
 *   insn=0x0000000000237340 string=0x00000000001F7CD0 "0'"
 *   insn=0x000000000023734C string=0x0000000000237350 ""
 *   insn=0x0000000000237360 string=0x0000000000237364 ""
 *   insn=0x0000000000237380 string=0x0000000000237384 ""
 *   insn=0x00000000002373A0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002373A4 string=0x00000000002373A8 "G)"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ShapeComponent::LoadFromProtobufMessage(
        Caver::ShapeComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 result; // x0
  __int64 v5; // x20
  int v6; // w8
  __int64 v7; // x0
  const Caver::Proto::Polygon *v8; // x2
  __int64 v9; // x8
  __int64 (__fastcall *v10)(Caver::ShapeComponent *, _BYTE *); // x20
  __int64 (__fastcall *v11)(Caver::ShapeComponent *, _BYTE *); // x20
  __int64 (__fastcall *v12)(Caver::ShapeComponent *, _BYTE *); // x20
  _QWORD *v13; // x19
  __int64 v14; // x8
  __int64 v15; // x8
  _BYTE v16[16]; // [xsp+90h] [xbp-40h] BYREF
  _QWORD *v17; // [xsp+A0h] [xbp-30h]
  __int64 v18; // [xsp+A8h] [xbp-28h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::LoadFromProtobufMessage(this, a2);
  result = google::protobuf::internal::ExtensionSet::GetMessage(
             (const Caver::Proto::Component *)((char *)a2 + 8),
             Caver::Proto::ShapeComponent::extension,
             (const google::protobuf::MessageLite *)qword_6E93B8);
  v5 = result;
  v6 = *(_DWORD *)(result + 40);
  if ( (v6 & 1) != 0 )
  {
    v11 = *(__int64 (__fastcall **)(Caver::ShapeComponent *, _BYTE *))(*(_QWORD *)this + 280LL);
    Caver::Shape::ShapeWithRectangle();
    result = v11(this, v16);
  }
  else if ( (v6 & 2) != 0 )
  {
    v12 = *(__int64 (__fastcall **)(Caver::ShapeComponent *, _BYTE *))(*(_QWORD *)this + 280LL);
    Caver::Shape::ShapeWithCircle();
    result = v12(this, v16);
  }
  else
  {
    if ( (v6 & 4) == 0 )
      return result;
    v7 = operator new(0x28u);
    *(_DWORD *)v7 = 0;
    *(_QWORD *)(v7 + 16) = 0;
    *(_QWORD *)(v7 + 24) = 0;
    *(_QWORD *)(v7 + 8) = 0;
    *(_WORD *)(v7 + 32) = 256;
    if ( *(_QWORD *)(v5 + 32) )
      v9 = v5;
    else
      v9 = Caver::Proto::ShapeComponent::default_instance_;
    Caver::LoadPolygonFromProtobufMessage((Caver *)v7, *(Caver::Polygon **)(v9 + 32), v8);
    v10 = *(__int64 (__fastcall **)(Caver::ShapeComponent *, _BYTE *))(*(_QWORD *)this + 280LL);
    Caver::Shape::ShapeWithPolygonNoCopy();
    result = v10(this, v16);
  }
  v13 = v17;
  if ( v17 )
  {
    v14 = v17[1] - 1LL;
    v17[1] = v14;
    if ( !v14 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
      v15 = v13[2] - 1LL;
      v13[2] = v15;
      if ( !v15 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
    }
  }
  return result;
}

