# demo-common-dll

解説は[Qiita](https://qiita.com/kurukuruz/items/5fdbd1f16bbb89eabaf9)に投稿。

## 注意点

### 文字コード

各ソースコードの文字コードはShift-JISで記述されている。

### ビルド

付属の`Makefile`は`nmake`を前提としている。

### Git管理外ディレクトリ

付属の`Makefile`を使用する場合、以下のディレクトリを作成する必要がある。

- `common-dll/dest`
- `common-dll/obj`
- `csharp/dest`
