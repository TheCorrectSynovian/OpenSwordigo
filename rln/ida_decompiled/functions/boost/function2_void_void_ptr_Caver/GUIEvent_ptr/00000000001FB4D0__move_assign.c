/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB4D0
 * Mangled: ._ZN5boost9function2IvPvPN5Caver8GUIEventEE11move_assignERS5_
 * Demangled: boost::function2<void,void *,Caver::GUIEvent *>::move_assign(boost::function2<void,void *,Caver::GUIEvent *>&)
 *
 * Callers: 1
 *   0x00000000003759B4  boost::function<void ()(void *,Caver::GUIEvent *)>::operator=(boost::function<void ()(void *,Caver::GUIEvent *)> const&)
 *
 * Callees: 1
 *   0x00000000003759B4  boost::function<void ()(void *,Caver::GUIEvent *)>::operator=(boost::function<void ()(void *,Caver::GUIEvent *)> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB4D8 string=0x00000000001FB4DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::function2<void,void *,Caver::GUIEvent *>::move_assign()
{
  JUMPOUT(0x375BAC);
}

