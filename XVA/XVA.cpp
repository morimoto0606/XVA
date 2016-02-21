// XVA.cpp : DLL アプリケーション用にエクスポートされる関数を定義します。
//

#include "stdafx.h"
#include "XVA.h"


// これは、エクスポートされた変数の例です。
XVA_API int nXVA=0;

// これは、エクスポートされた関数の例です。
XVA_API int fnXVA(void)
{
    return 42;
}

// これは、エクスポートされたクラスのコンストラクターです。
// クラス定義に関しては XVA.h を参照してください。
CXVA::CXVA()
{
    return;
}
