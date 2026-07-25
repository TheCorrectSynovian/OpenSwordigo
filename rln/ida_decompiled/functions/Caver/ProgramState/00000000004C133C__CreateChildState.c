/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C133C
 * Mangled: _ZN5Caver12ProgramState16CreateChildStateEv
 * Demangled: Caver::ProgramState::CreateChildState(void)
 *
 * Callers: 1
 *   0x0000000000201870  Caver::ProgramState::CreateChildState(void)
 *
 * Callees: 9
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC7B0  boost::detail::shared_count::shared_count<Caver::ProgramState>(Caver::ProgramState *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202BF0  Caver::ProgramState::ProgramState(Caver::ProgramState*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004C1424  Caver::ProgramState::SetParentObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x000000000052A9AC  sub_52A9AC
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 20
 *   insn=0x00000000004C1358 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004C1360 string=0x00000000004C1364 "#"
 *   insn=0x00000000004C1374 string=0x00000000001FC7B0 "0'"
 *   insn=0x00000000004C1380 string=0x00000000004C1384 "s"
 *   insn=0x00000000004C138C string=0x00000000004C1390 "i"@"
 *   insn=0x00000000004C1394 string=0x00000000004C1398 "\t "
 *   insn=0x00000000004C139C string=0x00000000004C13A0 "\t"
 *   insn=0x00000000004C13A0 string=0x00000000004C13A4 ")"
 *   insn=0x00000000004C13A4 string=0x00000000004C13A8 "\t"
 *   insn=0x00000000004C13B4 string=0x00000000004C13B8 "}"
 *   insn=0x00000000004C13B8 string=0x000000000052A9AC """
 *   insn=0x00000000004C13C8 string=0x00000000004C13CC ""
 *   insn=0x00000000004C13D0 string=0x00000000004C13D4 "A"
 *   insn=0x00000000004C13D8 string=0x00000000004C13DC "\t@"
 *   insn=0x00000000004C13E8 string=0x00000000004C13EC ""
 *   insn=0x00000000004C13F0 string=0x00000000004C13F4 "A"
 *   insn=0x00000000004C13F8 string=0x00000000004C13FC "@"
 *   insn=0x00000000004C1418 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004C141C string=0x00000000004C1420 ")"
 *   insn=0x00000000004C1420 string=0x00000000004C1424 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::ProgramState::CreateChildState@<X0>(
        Caver::ProgramState *this@<X0>,
        Caver::ProgramState **a2@<X8>)
{
  Caver::ProgramState *v4; // x21
  __int64 v5; // x0
  Caver::ProgramState *v6; // x8

  v4 = (Caver::ProgramState *)operator new(0x58u);
  Caver::ProgramState::ProgramState(v4, this);
  *a2 = v4;
  boost::detail::shared_count::shared_count<Caver::ProgramState>();
  boost::detail::sp_enable_shared_from_this();
  v5 = operator new(0x20u);
  v6 = a2[1];
  *(_QWORD *)(v5 + 16) = *a2;
  *(_QWORD *)(v5 + 24) = v6;
  if ( v6 )
    ++*((_QWORD *)v6 + 1);
  return sub_52A9AC(v5, (char *)this + 16);
}

