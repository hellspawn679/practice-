import moviepy.editor 
video =moviepy.editor.VideoFileClip('song.mkv')
audio =video.audio
audio.write_audiofile('test.mp3')