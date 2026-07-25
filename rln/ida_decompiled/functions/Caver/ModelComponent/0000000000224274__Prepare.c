/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000224274
 * Mangled: _ZN5Caver14ModelComponent7PrepareEv
 * Demangled: Caver::ModelComponent::Prepare(void)
 *
 * Callers: 1
 *   0x00000000002240E4  Caver::ModelComponent::LoadModel(void)
 *
 * Callees: 11
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6170  Caver::ModelInstance::InitWithModel(boost::shared_ptr<Caver::Model const> const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC920  Caver::ModelComponent::LoadModel(void)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000201EE0  Caver::ModelInstance::ModelInstance(void)
 *   0x00000000002021C0  Caver::ModelInstance::~ModelInstance()
 *   0x00000000002033F0  Caver::ModelComponent::UpdateBounds(void)
 *   0x0000000000224388  Caver::ModelComponent::UpdateBounds(void)
 *   0x0000000000226704  Caver::ModelComponent::className(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 26
 *   insn=0x0000000000224290 string=0x00000000002242A4 "hF@"
 *   insn=0x0000000000224298 string=0x000000000022429C "h>@"
 *   insn=0x0000000000224298 string=0x00000000001FC920 "0'"
 *   insn=0x000000000022429C string=0x00000000002242A0 ""
 *   insn=0x00000000002242B0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002242B4 string=0x00000000002242B8 "\nw"
 *   insn=0x00000000002242B8 string=0x00000000002242BC "vF@"
 *   insn=0x00000000002242BC string=0x00000000002242C0 "uF"
 *   insn=0x00000000002242D4 string=0x00000000002242D8 "uF@"
 *   insn=0x00000000002242D4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002242DC string=0x00000000002242E0 "h"
 *   insn=0x00000000002242F4 string=0x00000000001F6170 "0'"
 *   insn=0x00000000002242F8 string=0x00000000002242FC "=|"
 *   insn=0x0000000000224300 string=0x0000000000224304 "`"
 *   insn=0x0000000000224304 string=0x0000000000224308 "!"
 *   insn=0x0000000000224314 string=0x0000000000224318 "\t\t@"
 *   insn=0x0000000000224314 string=0x0000000000224324 "`J@"
 *   insn=0x0000000000224318 string=0x000000000022431C ")"
 *   insn=0x000000000022431C string=0x0000000000224320 "\t\t"
 *   insn=0x0000000000224324 string=0x0000000000224328 "hJ"
 *   insn=0x000000000022432C string=0x0000000000224330 "@"
 *   insn=0x0000000000224330 string=0x0000000000224334 ""
 *   insn=0x0000000000224334 string=0x0000000000224338 ""
 *   insn=0x000000000022433C string=0x0000000000224350 ""
 *   insn=0x0000000000224360 string=0x0000000000224364 " "
 *   insn=0x0000000000224380 string=0x0000000000224384 "Pu"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ModelComponent::Prepare(Caver::ModelComponent *this)
{
  _QWORD *v2; // x20
  Caver::ModelInstance *v3; // x21
  Caver::ModelInstance *v4; // x22
  __int64 v5; // x0
  __int64 v6; // x8
  _DWORD *result; // x0
  int v8; // w8

  v2 = (_QWORD *)((char *)this + 120);
  if ( *((_QWORD *)this + 15) || (Caver::ModelComponent::LoadModel(this), *((_QWORD *)this + 15)) )
  {
    if ( !*((_QWORD *)this + 17) )
    {
      v3 = (Caver::ModelInstance *)operator new(0x88u);
      Caver::ModelInstance::ModelInstance(v3);
      v4 = (Caver::ModelInstance *)*((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = v3;
      if ( v4 )
      {
        Caver::ModelInstance::~ModelInstance(v4);
        operator delete(v4);
      }
      if ( !*v2 )
        Caver::ModelComponent::LoadModel(this);
      Caver::ModelInstance::InitWithModel();
      Caver::ModelComponent::UpdateBounds(this);
    }
  }
  v5 = Caver::SceneObject::ComponentWithInterface(
         *((Caver::SceneObject **)this + 5),
         (__int64)Caver::TransformComponent::Interface);
  v6 = v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  result = (_DWORD *)*((_QWORD *)this + 18);
  *((_QWORD *)this + 18) = v6;
  if ( result )
  {
    v8 = result[2] - 1;
    result[2] = v8;
    if ( !v8 )
      return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

