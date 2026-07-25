/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000475190
 * Mangled: _ZN5Caver16SceneObjectGroup23LoadFromProtobufMessageERKNS_5Proto16SceneObjectGroupE
 * Demangled: Caver::SceneObjectGroup::LoadFromProtobufMessage(Caver::Proto::SceneObjectGroup const&)
 *
 * Callers: 2
 *   0x00000000001FC890  Caver::SceneObjectGroup::LoadFromProtobufMessage(Caver::Proto::SceneObjectGroup const&)
 *   0x0000000000475158  Caver::SceneObjectGroup::~SceneObjectGroup()
 *
 * Callees: 6
 *   0x00000000001F38E0  boost::detail::shared_count::shared_count<Caver::Program>(Caver::Program *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000201D20  Caver::Program::LoadFromProtobufMessage(Caver::Proto::Program const&)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 24
 *   insn=0x00000000004751A0 string=0x00000000004751A4 "V"
 *   insn=0x00000000004751B8 string=0x00000000004751BC "a\n@"
 *   insn=0x00000000004751BC string=0x00000000004751C0 ":"
 *   insn=0x00000000004751C0 string=0x00000000004751C4 "hBA9"
 *   insn=0x00000000004751C8 string=0x00000000004751CC "hFA9"
 *   insn=0x00000000004751D0 string=0x00000000004751D4 "hJA9"
 *   insn=0x00000000004751D8 string=0x00000000004751DC "h"
 *   insn=0x00000000004751DC string=0x00000000004751E0 "h"
 *   insn=0x00000000004751E8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004751EC string=0x00000000004751F0 ""
 *   insn=0x00000000004751F8 string=0x00000000004751FC " !"
 *   insn=0x00000000004751FC string=0x0000000000475200 "a"
 *   insn=0x0000000000475218 string=0x00000000001F38E0 "P'"
 *   insn=0x0000000000475240 string=0x0000000000475244 "5"
 *   insn=0x0000000000475244 string=0x0000000000475288 "i"
 *   insn=0x0000000000475248 string=0x000000000047524C ""
 *   insn=0x000000000047525C string=0x0000000000475260 "\t@"
 *   insn=0x0000000000475268 string=0x000000000047526C ""
 *   insn=0x000000000047527C string=0x0000000000475280 "@"
 *   insn=0x0000000000475288 string=0x000000000047528C "h.@"
 *   insn=0x000000000047528C string=0x0000000000475290 ")yD"
 *   insn=0x0000000000475298 string=0x000000000047529C ")"
 *   insn=0x000000000047529C string=0x00000000004752A0 "("
 *   insn=0x00000000004752D0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SceneObjectGroup::LoadFromProtobufMessage(
        Caver::SceneObjectGroup *this,
        const Caver::Proto::SceneObjectGroup *a2)
{
  _QWORD *v4; // x0
  _QWORD *v5; // x21
  __int64 v6; // x8
  __int64 v7; // x8
  const Caver::Proto::SceneObjectGroup *v8; // x8
  _QWORD *v9; // [xsp+8h] [xbp-38h]
  __int64 v10; // [xsp+10h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  sub_56A6A8((char *)this + 32);
  *((_BYTE *)this + 72) = *((_BYTE *)a2 + 80);
  *((_BYTE *)this + 73) = *((_BYTE *)a2 + 81);
  *((_BYTE *)this + 75) = *((_BYTE *)a2 + 82);
  if ( (*((_BYTE *)a2 + 96) & 0x20) != 0 )
  {
    v4 = (_QWORD *)operator new(0x28u);
    v4[3] = 0;
    v4[4] = 0;
    v4[1] = 0;
    v4[2] = 0;
    v9 = v4;
    *v4 = &byte_6FD2F8;
    boost::detail::shared_count::shared_count<Caver::Program>();
    boost::detail::sp_enable_shared_from_this();
    v5 = (_QWORD *)*((_QWORD *)this + 6);
    *((_QWORD *)this + 5) = v9;
    *((_QWORD *)this + 6) = v10;
    if ( v5 )
    {
      v6 = v5[1] - 1LL;
      v5[1] = v6;
      if ( !v6 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
        v7 = v5[2] - 1LL;
        v5[2] = v7;
        if ( !v7 )
          (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
      }
    }
    if ( *((_QWORD *)a2 + 11) )
      v8 = a2;
    else
      v8 = (const Caver::Proto::SceneObjectGroup *)Caver::Proto::SceneObjectGroup::default_instance_;
    Caver::Program::LoadFromProtobufMessage(*((Caver::Program **)this + 5), *((const Caver::Proto::Program **)v8 + 11));
  }
}

