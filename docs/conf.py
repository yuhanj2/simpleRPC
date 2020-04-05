import subprocess


project = u'Test'
author = u'Jeroen F.J. Laros'
copyright = u'2019, {}'.format(author)

extensions = ['breathe']
breathe_version = '4.3.1'
breathe_projects = {'doxygen': 'xml'}
breathe_default_project = 'doxygen'
breathe_default_members = ['members']

master_doc = 'index'

html_theme = 'sphinx_rtd_theme'


subprocess.call(
    'pip install breathe=={}; doxygen'.format(breathe_version), shell=True)