# speedFunctions
Speed up functions for Arduino

Arduino 用の高速化ライブラリです。
主に digitalWrite を、簡単に高速化できるようにしました。
Bポート、Dポートなどと意識せず、Arduino のピン番号を指定するだけで高速 I/O ができます。

ただし、check がうまく動かないようです。
通常の digitalRead を使用してください。

詳しい使い方については、同梱されているサンプルスケッチを参照してください。
