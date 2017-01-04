#include <QDebug>

#include <QtCompress/qzipreader.h>

int main(int argc, char *argv[]) {
  Q_UNUSED( argc );
  Q_UNUSED( argv );

  QZipReader reader( "test.zip" );

  qDebug() << "Count:" << reader.count();

  bool success = reader.extractAll( "testDir" );

  if( success )
    qDebug() << "Files should be decompressed.";
  else
    qDebug() << "Decompression failed.";

  return 0;
}
