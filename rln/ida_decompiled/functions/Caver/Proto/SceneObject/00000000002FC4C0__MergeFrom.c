/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FC4C0
 * Mangled: _ZN5Caver5Proto11SceneObject9MergeFromERKS1_
 * Demangled: Caver::Proto::SceneObject::MergeFrom(Caver::Proto::SceneObject const&)
 *
 * Callers: 1
 *   0x00000000001FE420  Caver::Proto::SceneObject::MergeFrom(Caver::Proto::SceneObject const&)
 *
 * Callees: 20
 *   0x00000000001F37A0  Caver::Proto::Program::MergeFrom(Caver::Proto::Program const&)
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FAB70  Caver::Proto::Component::MergeFrom(Caver::Proto::Component const&)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FB070  Caver::Proto::Rectangle::Rectangle(void)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FC7D0  Caver::Proto::ObjectTemplate::MergeFrom(Caver::Proto::ObjectTemplate const&)
 *   0x00000000001FDEF0  google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<Caver::Proto::Component>::TypeHandler>(void)
 *   0x00000000002021D0  Caver::Proto::Rectangle::MergeFrom(Caver::Proto::Rectangle const&)
 *   0x00000000002035C0  Caver::Proto::Vector2::MergeFrom(Caver::Proto::Vector2 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 95
 *   insn=0x00000000002FC4D4 string=0x00000000002FC4D8 "W"
 *   insn=0x00000000002FC4F0 string=0x00000000002FC4F4 "b"
 *   insn=0x00000000002FC4F4 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x00000000002FC508 string=0x00000000002FC50C "a"
 *   insn=0x00000000002FC508 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002FC50C string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002FC514 string=0x00000000002FC518 ">"
 *   insn=0x00000000002FC518 string=0x00000000001FC210 "0'"
 *   insn=0x00000000002FC524 string=0x00000000001FA500 "0'"
 *   insn=0x00000000002FC528 string=0x00000000002FC52C "1"
 *   insn=0x00000000002FC52C string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002FC530 string=0x00000000002FC534 "i*@"
 *   insn=0x00000000002FC53C string=0x00000000002FC540 "!"
 *   insn=0x00000000002FC544 string=0x00000000002FC548 "h*@"
 *   insn=0x00000000002FC544 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002FC550 string=0x00000000002FC580 "h"
 *   insn=0x00000000002FC554 string=0x00000000002FC558 "h"
 *   insn=0x00000000002FC560 string=0x00000000002FC564 "c"
 *   insn=0x00000000002FC564 string=0x00000000001FDEF0 "0'"
 *   insn=0x00000000002FC56C string=0x00000000002FC570 "h*"
 *   insn=0x00000000002FC56C string=0x00000000001FAB70 "0'"
 *   insn=0x00000000002FC58C string=0x00000000002FC590 "7h\t"
 *   insn=0x00000000002FC58C string=0x00000000002FC620 "I"
 *   insn=0x00000000002FC590 string=0x00000000002FC594 "h\t"
 *   insn=0x00000000002FC590 string=0x00000000002FC670 "I"
 *   insn=0x00000000002FC59C string=0x00000000002FC5A0 "h07("
 *   insn=0x00000000002FC5A0 string=0x00000000002FC5A4 "("
 *   insn=0x00000000002FC5B4 string=0x00000000002FC5B8 "i"
 *   insn=0x00000000002FC5B8 string=0x00000000002FC5BC ""
 *   insn=0x00000000002FC5C4 string=0x00000000002FC5C8 "h"
 *   insn=0x00000000002FC5D4 string=0x00000000002FC5D8 ""
 *   insn=0x00000000002FC5E0 string=0x00000000002FC5F8 "I"
 *   insn=0x00000000002FC5E8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002FC5F0 string=0x00000000001F5000 "P'"
 *   insn=0x00000000002FC5F8 string=0x00000000002FC5FC "hB@"
 *   insn=0x00000000002FC5FC string=0x00000000002FC600 ")"
 *   insn=0x00000000002FC608 string=0x00000000002FC60C ")"
 *   insn=0x00000000002FC60C string=0x00000000002FC610 "("
 *   insn=0x00000000002FC614 string=0x00000000002FC618 "b"
 *   insn=0x00000000002FC618 string=0x00000000002FC61C "i"
 *   insn=0x00000000002FC618 string=0x00000000001F37A0 "P'"
 *   insn=0x00000000002FC628 string=0x00000000002FC62C "u\n@"
 *   insn=0x00000000002FC62C string=0x00000000002FC630 ")9@"
 *   insn=0x00000000002FC630 string=0x00000000002FC634 ""
 *   insn=0x00000000002FC648 string=0x00000000002FC64C "H"
 *   insn=0x00000000002FC64C string=0x00000000002FC650 ""
 *   insn=0x00000000002FC650 string=0x00000000002FC654 "a"
 *   insn=0x00000000002FC654 string=0x00000000002FC658 ""
 *   insn=0x00000000002FC664 string=0x00000000002FC668 "h"
 *   insn=0x00000000002FC668 string=0x00000000002FC66C "H"
 *   insn=0x00000000002FC678 string=0x00000000002FC67C "u"
 *   insn=0x00000000002FC67C string=0x00000000002FC680 ")"
 *   insn=0x00000000002FC680 string=0x00000000002FC684 ""
 *   insn=0x00000000002FC698 string=0x00000000002FC69C "H"
 *   insn=0x00000000002FC69C string=0x00000000002FC6A0 ""
 *   insn=0x00000000002FC6A0 string=0x00000000002FC6A4 "a"
 *   insn=0x00000000002FC6A4 string=0x00000000002FC6A8 ""
 *   insn=0x00000000002FC6B4 string=0x00000000002FC6B8 "h"
 *   insn=0x00000000002FC6C4 string=0x00000000002FC6C8 ""
 *   insn=0x00000000002FC6D0 string=0x00000000002FC6E8 "I"
 *   insn=0x00000000002FC6DC string=0x00000000002FC6E0 "|"
 *   insn=0x00000000002FC6E0 string=0x00000000001F7CD0 "0'"
 *   insn=0x00000000002FC6E8 string=0x00000000002FC6EC "h.@"
 *   insn=0x00000000002FC6EC string=0x00000000002FC6F0 ")"
 *   insn=0x00000000002FC6F8 string=0x00000000002FC6FC ")"
 *   insn=0x00000000002FC6FC string=0x00000000002FC700 "("
 *   insn=0x00000000002FC708 string=0x00000000002FC70C "h"
 *   insn=0x00000000002FC70C string=0x00000000002FC710 "h"
 *   insn=0x00000000002FC714 string=0x00000000002FC718 "ib@"
 *   insn=0x00000000002FC718 string=0x00000000002FC71C ""
 *   insn=0x00000000002FC724 string=0x00000000002FC728 "h"
 *   insn=0x00000000002FC730 string=0x00000000002FC734 "if@"
 *   insn=0x00000000002FC734 string=0x00000000002FC738 ""
 *   insn=0x00000000002FC740 string=0x00000000002FC744 "h"
 *   insn=0x00000000002FC74C string=0x00000000002FC750 "ij@"
 *   insn=0x00000000002FC750 string=0x00000000002FC754 ""
 *   insn=0x00000000002FC75C string=0x00000000002FC760 "h"
 *   insn=0x00000000002FC760 string=0x00000000002FC764 "("
 *   insn=0x00000000002FC76C string=0x00000000002FC770 ""
 *   insn=0x00000000002FC778 string=0x00000000002FC790 "I"
 *   insn=0x00000000002FC784 string=0x00000000002FC788 ":"
 *   insn=0x00000000002FC788 string=0x00000000001FB070 "0'"
 *   insn=0x00000000002FC790 string=0x00000000002FC794 "h:@"
 *   insn=0x00000000002FC794 string=0x00000000002FC798 ")"
 *   insn=0x00000000002FC7A0 string=0x00000000002FC7A4 ")"
 *   insn=0x00000000002FC7A4 string=0x00000000002FC7A8 "("
 *   insn=0x00000000002FC7B0 string=0x00000000002FC7B4 "h"
 *   insn=0x00000000002FC7E8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002FC7FC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002FC800 string=0x00000000002FC804 "0"
 *   insn=0x00000000002FC80C string=0x00000000002FC810 "x"
 *   insn=0x00000000002FC814 string=0x00000000002FC818 "+"
 *   insn=0x00000000002FC834 string=0x00000000002FC838 "@"
 *   insn=0x00000000002FC840 string=0x00000000002FC844 ""
 *   insn=0x00000000002FC85C string=0x00000000001FC7D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SceneObject::MergeFrom(
        Caver::Proto::SceneObject *this,
        const Caver::Proto::SceneObject *a2)
{
  __int64 v4; // x24
  int v5; // w8
  char v6; // w9
  __int64 v7; // x21
  Caver::Proto::Program *v8; // x21
  __int64 *v9; // x0
  __int64 *v10; // x0
  Caver::Proto::Vector2 *v11; // x21
  const Caver::Proto::SceneObject *v12; // x8
  int v13; // w9
  int v14; // w9
  int v15; // w9
  Caver::Proto::Rectangle *v16; // x21
  const Caver::Proto::SceneObject *v17; // x8
  _BYTE v18[32]; // [xsp+28h] [xbp-58h] BYREF
  __int64 v19; // [xsp+48h] [xbp-38h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 == this )
  {
    google::protobuf::internal::LogMessage::LogMessage();
    google::protobuf::internal::LogMessage::operator<<((int)v18, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=();
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v18);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
    (Caver::Proto::SceneObject *)((char *)this + 32),
    *((_DWORD *)a2 + 10) + *((_DWORD *)this + 10));
  if ( *((int *)a2 + 10) >= 1 )
  {
    v4 = 0;
    do
    {
      google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<Caver::Proto::Component>::TypeHandler>((Caver::Proto::SceneObject *)((char *)this + 32));
      Caver::Proto::Component::MergeFrom();
      ++v4;
    }
    while ( v4 < *((int *)a2 + 10) );
  }
  v5 = *((_DWORD *)a2 + 34);
  if ( !(_BYTE)v5 )
    goto LABEL_14;
  if ( (v5 & 1) != 0 )
  {
    v9 = (__int64 *)*((_QWORD *)this + 2);
    *((_DWORD *)this + 34) |= 1u;
    if ( v9 == &Caver::Proto::SceneObject::_default_template_name_ )
    {
      v9 = (__int64 *)operator new(8u);
      *v9 = (__int64)&byte_6FD2F8;
      *((_QWORD *)this + 2) = v9;
    }
    sub_56A6A8(v9);
    v5 = *((_DWORD *)a2 + 34);
    if ( (v5 & 2) == 0 )
    {
LABEL_9:
      if ( (v5 & 8) == 0 )
        goto LABEL_10;
      goto LABEL_27;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_9;
  }
  v10 = (__int64 *)*((_QWORD *)this + 3);
  *((_DWORD *)this + 34) |= 2u;
  if ( v10 == &Caver::Proto::SceneObject::_default_identifier_ )
  {
    v10 = (__int64 *)operator new(8u);
    *v10 = (__int64)&byte_6FD2F8;
    *((_QWORD *)this + 3) = v10;
  }
  sub_56A6A8(v10);
  v5 = *((_DWORD *)a2 + 34);
  if ( (v5 & 8) == 0 )
  {
LABEL_10:
    if ( (v5 & 0x10) == 0 )
      goto LABEL_11;
    goto LABEL_33;
  }
LABEL_27:
  v11 = (Caver::Proto::Vector2 *)*((_QWORD *)this + 11);
  *((_DWORD *)this + 34) |= 8u;
  if ( !v11 )
  {
    v11 = (Caver::Proto::Vector2 *)operator new(0x18u);
    Caver::Proto::Vector2::Vector2(v11);
    *((_QWORD *)this + 11) = v11;
  }
  if ( *((_QWORD *)a2 + 11) )
    v12 = a2;
  else
    v12 = (const Caver::Proto::SceneObject *)Caver::Proto::SceneObject::default_instance_;
  Caver::Proto::Vector2::MergeFrom(v11, *((const Caver::Proto::Vector2 **)v12 + 11));
  v5 = *((_DWORD *)a2 + 34);
  if ( (v5 & 0x10) == 0 )
  {
LABEL_11:
    if ( (v5 & 0x20) == 0 )
      goto LABEL_12;
    goto LABEL_34;
  }
LABEL_33:
  v13 = *((_DWORD *)a2 + 24);
  *((_DWORD *)this + 34) |= 0x10u;
  *((_DWORD *)this + 24) = v13;
  v5 = *((_DWORD *)a2 + 34);
  if ( (v5 & 0x20) == 0 )
  {
LABEL_12:
    if ( (v5 & 0x40) == 0 )
      goto LABEL_13;
    goto LABEL_35;
  }
LABEL_34:
  v14 = *((_DWORD *)a2 + 25);
  *((_DWORD *)this + 34) |= 0x20u;
  *((_DWORD *)this + 25) = v14;
  v5 = *((_DWORD *)a2 + 34);
  if ( (v5 & 0x40) != 0 )
  {
LABEL_35:
    v15 = *((_DWORD *)a2 + 26);
    *((_DWORD *)this + 34) |= 0x40u;
    *((_DWORD *)this + 26) = v15;
    v5 = *((_DWORD *)a2 + 34);
    if ( (v5 & 0x80) != 0 )
      goto LABEL_36;
LABEL_14:
    if ( (v5 & 0xFF00) == 0 )
      return;
    goto LABEL_15;
  }
LABEL_13:
  if ( (v5 & 0x80) == 0 )
    goto LABEL_14;
LABEL_36:
  v16 = (Caver::Proto::Rectangle *)*((_QWORD *)this + 14);
  *((_DWORD *)this + 34) |= 0x80u;
  if ( !v16 )
  {
    v16 = (Caver::Proto::Rectangle *)operator new(0x20u);
    Caver::Proto::Rectangle::Rectangle(v16);
    *((_QWORD *)this + 14) = v16;
  }
  if ( *((_QWORD *)a2 + 14) )
    v17 = a2;
  else
    v17 = (const Caver::Proto::SceneObject *)Caver::Proto::SceneObject::default_instance_;
  Caver::Proto::Rectangle::MergeFrom(v16, *((const Caver::Proto::Rectangle **)v17 + 14));
  v5 = *((_DWORD *)a2 + 34);
  if ( (v5 & 0xFF00) != 0 )
  {
LABEL_15:
    if ( (v5 & 0x100) != 0 )
    {
      v6 = *((_BYTE *)a2 + 120);
      *((_DWORD *)this + 34) |= 0x100u;
      *((_BYTE *)this + 120) = v6;
      v5 = *((_DWORD *)a2 + 34);
    }
    if ( (v5 & 0x200) != 0 )
    {
      v7 = *((_QWORD *)this + 16);
      *((_DWORD *)this + 34) |= 0x200u;
      if ( !v7 )
      {
        v8 = (Caver::Proto::Program *)operator new(0x30u);
        Caver::Proto::Program::Program(v8);
        *((_QWORD *)this + 16) = v8;
      }
      Caver::Proto::Program::MergeFrom();
    }
  }
}

