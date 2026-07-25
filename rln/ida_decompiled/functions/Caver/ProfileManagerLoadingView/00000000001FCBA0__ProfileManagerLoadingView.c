/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCBA0
 * Mangled: ._ZN5Caver25ProfileManagerLoadingViewC2Ev
 * Demangled: Caver::ProfileManagerLoadingView::ProfileManagerLoadingView(void)
 *
 * Callers: 1
 *   0x00000000003A8E38  Caver::ProfileManagerLoadingViewController::LoadView(void)
 *
 * Callees: 1
 *   0x00000000003A8080  Caver::ProfileManagerLoadingView::ProfileManagerLoadingView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCBA8 string=0x00000000001FCBAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProfileManagerLoadingView::ProfileManagerLoadingView(Caver::ProfileManagerLoadingView *this)
{
  return _ZN5Caver25ProfileManagerLoadingViewC2Ev(this);
}

